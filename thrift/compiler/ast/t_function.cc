/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/compiler/ast/t_function.h>

#include <thrift/compiler/ast/t_interaction.h>
#include <thrift/compiler/ast/t_sink.h>
#include <thrift/compiler/ast/t_stream.h>

namespace apache {
namespace thrift {
namespace compiler {

t_function::t_function(
    t_program* program,
    t_type_ref return_type,
    std::unique_ptr<t_node> sink_or_stream,
    std::string name,
    t_type_ref interaction)
    : t_named(program, std::move(name)),
      sink_or_stream_(std::move(sink_or_stream)),
      interaction_(interaction),
      paramlist_(std::make_unique<t_paramlist>(program)) {
  if (return_type) {
    return_types_.push_back(return_type);
  }
  assert(!sink_or_stream_ || sink() || stream());
}

t_function::t_function(
    t_type_ref return_type,
    std::string name,
    std::unique_ptr<t_paramlist> paramlist,
    t_function_qualifier qualifier)
    : t_named(nullptr, std::move(name)),
      paramlist_(std::move(paramlist)),
      qualifier_(qualifier) {
  assert(paramlist_);
  set_return_type(return_type);
}

const t_type* t_function::return_type() const {
  if (is_interaction_constructor_) {
    // The old syntax (performs) treats an interaction as a response.
    return interaction_.get_type();
  }
  return response_pos_ != -1 ? return_types_[response_pos_].get_type()
                             : &t_base_type::t_void();
}
} // namespace compiler
} // namespace thrift
} // namespace apache
