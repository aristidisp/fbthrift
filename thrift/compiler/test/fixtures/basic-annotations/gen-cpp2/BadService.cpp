/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/BadService.h"
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/BadService.tcc"
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

std::unique_ptr<apache::thrift::AsyncProcessor> apache::thrift::ServiceHandler<::cpp2::GoodService>::getProcessor() {
  return std::make_unique<::cpp2::GoodServiceAsyncProcessor>(this);
}

apache::thrift::ServiceHandler<::cpp2::GoodService>::CreateMethodMetadataResult apache::thrift::ServiceHandler<::cpp2::GoodService>::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<::cpp2::GoodServiceAsyncProcessor>(getServiceRequestInfoMap().value().get());
}

std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> apache::thrift::ServiceHandler<::cpp2::GoodService>::getServiceRequestInfoMap() const {
  return __fbthrift_serviceInfoHolder.requestInfoMap();
}

::cpp2::GoodServiceServiceInfoHolder apache::thrift::ServiceHandler<::cpp2::GoodService>::__fbthrift_serviceInfoHolder;


std::unique_ptr<apache::thrift::ServiceHandler<::cpp2::GoodService>::BadInteractionIf> apache::thrift::ServiceHandler<::cpp2::GoodService>::createBadInteraction() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("createBadInteraction");
}

::std::int32_t apache::thrift::ServiceHandler<::cpp2::GoodService>::bar() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("bar");
}

folly::SemiFuture<::std::int32_t> apache::thrift::ServiceHandler<::cpp2::GoodService>::semifuture_bar() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_bar.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return bar();
}

folly::Future<::std::int32_t> apache::thrift::ServiceHandler<::cpp2::GoodService>::future_bar() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_bar.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_bar(), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::GoodService>::async_tm_bar(std::unique_ptr<apache::thrift::HandlerCallback<::std::int32_t>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_bar.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_bar.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_bar();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_bar();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(bar());
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}


void apache::thrift::ServiceHandler<::cpp2::GoodService>::BadInteractionIf::foo() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("foo");
}

folly::SemiFuture<folly::Unit> apache::thrift::ServiceHandler<::cpp2::GoodService>::BadInteractionIf::semifuture_foo() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_foo.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  foo();
  return folly::makeSemiFuture();
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<void> apache::thrift::ServiceHandler<::cpp2::GoodService>::BadInteractionIf::co_foo() {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_foo.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  folly::throw_exception(apache::thrift::detail::si::UnimplementedCoroMethod::withCapturedArgs<>());
}

folly::coro::Task<void> apache::thrift::ServiceHandler<::cpp2::GoodService>::BadInteractionIf::co_foo(apache::thrift::RequestParams /* params */) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_foo.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_foo();
}
#endif // FOLLY_HAS_COROUTINES

void apache::thrift::ServiceHandler<::cpp2::GoodService>::BadInteractionIf::async_tm_foo(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
#if FOLLY_HAS_COROUTINES
determineInvocationType:
#endif // FOLLY_HAS_COROUTINES
  auto invocationType = __fbthrift_invocation_foo.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_foo.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_foo(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_foo.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_foo();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_foo(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_foo();
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        foo();
        callback->done();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
#if FOLLY_HAS_COROUTINES
  } catch (apache::thrift::detail::si::UnimplementedCoroMethod& ex) {
    std::tie() = std::move(ex).restoreArgs<>();
    goto determineInvocationType;
#endif // FOLLY_HAS_COROUTINES
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

namespace cpp2 {

::std::int32_t GoodServiceSvNull::bar() {
  return 0;
}


const char* GoodServiceAsyncProcessor::getServiceName() {
  return "BadService";
}

void GoodServiceAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::GoodService>>::gen(response);
}

void GoodServiceAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

void GoodServiceAsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, iface_, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

void GoodServiceAsyncProcessor::executeRequest(apache::thrift::ServerRequest&& request, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) {
  apache::thrift::detail::ap::execute(this, std::move(request), apache::thrift::detail::ServerRequestHelper::protocol(request), methodMetadata);
}

const GoodServiceAsyncProcessor::ProcessMap& GoodServiceAsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const GoodServiceAsyncProcessor::ProcessMap GoodServiceAsyncProcessor::kOwnProcessMap_ {
  {"bar",
    {&GoodServiceAsyncProcessor::setUpAndProcess_bar<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &GoodServiceAsyncProcessor::setUpAndProcess_bar<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &GoodServiceAsyncProcessor::executeRequest_bar<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &GoodServiceAsyncProcessor::executeRequest_bar<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"BadInteraction.foo",
    {&GoodServiceAsyncProcessor::setUpAndProcess_BadInteraction_foo<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &GoodServiceAsyncProcessor::setUpAndProcess_BadInteraction_foo<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &GoodServiceAsyncProcessor::executeRequest_BadInteraction_foo<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &GoodServiceAsyncProcessor::executeRequest_BadInteraction_foo<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

apache::thrift::ServiceRequestInfoMap const& GoodServiceServiceInfoHolder::requestInfoMap() const {
  static folly::Indestructible<apache::thrift::ServiceRequestInfoMap> requestInfoMap{staticRequestInfoMap()};
  return *requestInfoMap;
}

apache::thrift::ServiceRequestInfoMap GoodServiceServiceInfoHolder::staticRequestInfoMap() {
  apache::thrift::ServiceRequestInfoMap requestInfoMap = {
  {"bar",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "BadService.bar",
     std::nullopt,
     apache::thrift::concurrency::NORMAL}},
  {"BadInteraction.foo",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "BadService.BadInteraction.foo",
     "BadInteraction",
     apache::thrift::concurrency::NORMAL}},
  };

  return requestInfoMap;
}
const GoodServiceAsyncProcessor::InteractionConstructorMap& GoodServiceAsyncProcessor::getInteractionConstructorMap() {
  return interactionConstructorMap_;
}

const GoodServiceAsyncProcessor::InteractionConstructorMap GoodServiceAsyncProcessor::interactionConstructorMap_ {
  {"BadInteraction", &GoodServiceAsyncProcessor::createBadInteraction},
};

std::unique_ptr<apache::thrift::Tile> GoodServiceAsyncProcessor::createInteractionImpl(const std::string& name) {
  auto fn = getInteractionConstructorMap().at(name);
  return (this->*fn)();
}} // cpp2
