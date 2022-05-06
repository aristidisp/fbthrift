/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/params/gen-cpp2/module_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {
class NestedContainers;
} // cpp2
namespace apache::thrift {

template <>
class Client<::cpp2::NestedContainers> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "NestedContainers";
  }


  virtual void mapList(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo);
  virtual void mapList(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo);
 protected:
  void mapListImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo, bool stealRpcOptions = false);
 public:

  virtual void sync_mapList(const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo);
  virtual void sync_mapList(apache::thrift::RpcOptions& rpcOptions, const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo);

  virtual folly::Future<folly::Unit> future_mapList(const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_mapList(const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo);
  virtual folly::Future<folly::Unit> future_mapList(apache::thrift::RpcOptions& rpcOptions, const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_mapList(apache::thrift::RpcOptions& rpcOptions, const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_mapList(apache::thrift::RpcOptions& rpcOptions, const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_mapList(apache::thrift::RpcOptions& rpcOptions, const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<void> co_mapList(const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo) {
    return co_mapList<false>(nullptr, p_foo);
  }
  template <int = 0>
  folly::coro::Task<void> co_mapList(apache::thrift::RpcOptions& rpcOptions, const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo) {
    return co_mapList<true>(&rpcOptions, p_foo);
  }
#else
  folly::coro::Task<void> co_mapList(const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo) {
    co_await folly::coro::detachOnCancel(semifuture_mapList(p_foo));
  }
  folly::coro::Task<void> co_mapList(apache::thrift::RpcOptions& rpcOptions, const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo) {
    co_await folly::coro::detachOnCancel(semifuture_mapList(rpcOptions, p_foo));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_mapList(apache::thrift::RpcOptions* rpcOptions, const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = mapListCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      mapListImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_foo);
    } else {
      mapListImpl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_foo);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    if (auto ew = recv_wrapped_mapList(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void mapList(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo);


  static folly::exception_wrapper recv_wrapped_mapList(::apache::thrift::ClientReceiveState& state);
  static void recv_mapList(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_mapList(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_mapList(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void mapListT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>& p_foo);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> mapListCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void mapSet(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo);
  virtual void mapSet(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo);
 protected:
  void mapSetImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo, bool stealRpcOptions = false);
 public:

  virtual void sync_mapSet(const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo);
  virtual void sync_mapSet(apache::thrift::RpcOptions& rpcOptions, const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo);

  virtual folly::Future<folly::Unit> future_mapSet(const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_mapSet(const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo);
  virtual folly::Future<folly::Unit> future_mapSet(apache::thrift::RpcOptions& rpcOptions, const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_mapSet(apache::thrift::RpcOptions& rpcOptions, const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_mapSet(apache::thrift::RpcOptions& rpcOptions, const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_mapSet(apache::thrift::RpcOptions& rpcOptions, const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<void> co_mapSet(const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo) {
    return co_mapSet<false>(nullptr, p_foo);
  }
  template <int = 0>
  folly::coro::Task<void> co_mapSet(apache::thrift::RpcOptions& rpcOptions, const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo) {
    return co_mapSet<true>(&rpcOptions, p_foo);
  }
#else
  folly::coro::Task<void> co_mapSet(const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo) {
    co_await folly::coro::detachOnCancel(semifuture_mapSet(p_foo));
  }
  folly::coro::Task<void> co_mapSet(apache::thrift::RpcOptions& rpcOptions, const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo) {
    co_await folly::coro::detachOnCancel(semifuture_mapSet(rpcOptions, p_foo));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_mapSet(apache::thrift::RpcOptions* rpcOptions, const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = mapSetCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      mapSetImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_foo);
    } else {
      mapSetImpl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_foo);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    if (auto ew = recv_wrapped_mapSet(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void mapSet(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo);


  static folly::exception_wrapper recv_wrapped_mapSet(::apache::thrift::ClientReceiveState& state);
  static void recv_mapSet(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_mapSet(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_mapSet(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void mapSetT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::map<::std::int32_t, ::std::set<::std::int32_t>>& p_foo);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> mapSetCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void listMap(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo);
  virtual void listMap(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo);
 protected:
  void listMapImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo, bool stealRpcOptions = false);
 public:

  virtual void sync_listMap(const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo);
  virtual void sync_listMap(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo);

  virtual folly::Future<folly::Unit> future_listMap(const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_listMap(const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo);
  virtual folly::Future<folly::Unit> future_listMap(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_listMap(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_listMap(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_listMap(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<void> co_listMap(const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo) {
    return co_listMap<false>(nullptr, p_foo);
  }
  template <int = 0>
  folly::coro::Task<void> co_listMap(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo) {
    return co_listMap<true>(&rpcOptions, p_foo);
  }
#else
  folly::coro::Task<void> co_listMap(const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo) {
    co_await folly::coro::detachOnCancel(semifuture_listMap(p_foo));
  }
  folly::coro::Task<void> co_listMap(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo) {
    co_await folly::coro::detachOnCancel(semifuture_listMap(rpcOptions, p_foo));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_listMap(apache::thrift::RpcOptions* rpcOptions, const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = listMapCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      listMapImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_foo);
    } else {
      listMapImpl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_foo);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    if (auto ew = recv_wrapped_listMap(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void listMap(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo);


  static folly::exception_wrapper recv_wrapped_listMap(::apache::thrift::ClientReceiveState& state);
  static void recv_listMap(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_listMap(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_listMap(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void listMapT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>& p_foo);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> listMapCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void listSet(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::vector<::std::set<::std::int32_t>>& p_foo);
  virtual void listSet(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::vector<::std::set<::std::int32_t>>& p_foo);
 protected:
  void listSetImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::vector<::std::set<::std::int32_t>>& p_foo, bool stealRpcOptions = false);
 public:

  virtual void sync_listSet(const ::std::vector<::std::set<::std::int32_t>>& p_foo);
  virtual void sync_listSet(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::set<::std::int32_t>>& p_foo);

  virtual folly::Future<folly::Unit> future_listSet(const ::std::vector<::std::set<::std::int32_t>>& p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_listSet(const ::std::vector<::std::set<::std::int32_t>>& p_foo);
  virtual folly::Future<folly::Unit> future_listSet(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::set<::std::int32_t>>& p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_listSet(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::set<::std::int32_t>>& p_foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_listSet(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::set<::std::int32_t>>& p_foo);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_listSet(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::set<::std::int32_t>>& p_foo);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<void> co_listSet(const ::std::vector<::std::set<::std::int32_t>>& p_foo) {
    return co_listSet<false>(nullptr, p_foo);
  }
  template <int = 0>
  folly::coro::Task<void> co_listSet(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::set<::std::int32_t>>& p_foo) {
    return co_listSet<true>(&rpcOptions, p_foo);
  }
#else
  folly::coro::Task<void> co_listSet(const ::std::vector<::std::set<::std::int32_t>>& p_foo) {
    co_await folly::coro::detachOnCancel(semifuture_listSet(p_foo));
  }
  folly::coro::Task<void> co_listSet(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::set<::std::int32_t>>& p_foo) {
    co_await folly::coro::detachOnCancel(semifuture_listSet(rpcOptions, p_foo));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_listSet(apache::thrift::RpcOptions* rpcOptions, const ::std::vector<::std::set<::std::int32_t>>& p_foo) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = listSetCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      listSetImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_foo);
    } else {
      listSetImpl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_foo);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    if (auto ew = recv_wrapped_listSet(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void listSet(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::std::vector<::std::set<::std::int32_t>>& p_foo);


  static folly::exception_wrapper recv_wrapped_listSet(::apache::thrift::ClientReceiveState& state);
  static void recv_listSet(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_listSet(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_listSet(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void listSetT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::vector<::std::set<::std::int32_t>>& p_foo);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> listSetCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void turtles(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo);
  virtual void turtles(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo);
 protected:
  void turtlesImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo, bool stealRpcOptions = false);
 public:

  virtual void sync_turtles(const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo);
  virtual void sync_turtles(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo);

  virtual folly::Future<folly::Unit> future_turtles(const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_turtles(const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo);
  virtual folly::Future<folly::Unit> future_turtles(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_turtles(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_turtles(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_turtles(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<void> co_turtles(const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo) {
    return co_turtles<false>(nullptr, p_foo);
  }
  template <int = 0>
  folly::coro::Task<void> co_turtles(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo) {
    return co_turtles<true>(&rpcOptions, p_foo);
  }
#else
  folly::coro::Task<void> co_turtles(const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo) {
    co_await folly::coro::detachOnCancel(semifuture_turtles(p_foo));
  }
  folly::coro::Task<void> co_turtles(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo) {
    co_await folly::coro::detachOnCancel(semifuture_turtles(rpcOptions, p_foo));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_turtles(apache::thrift::RpcOptions* rpcOptions, const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = turtlesCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      turtlesImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_foo);
    } else {
      turtlesImpl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_foo);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    if (auto ew = recv_wrapped_turtles(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void turtles(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo);


  static folly::exception_wrapper recv_wrapped_turtles(::apache::thrift::ClientReceiveState& state);
  static void recv_turtles(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_turtles(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_turtles(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void turtlesT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>& p_foo);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> turtlesCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // namespace apache::thrift

namespace cpp2 {
using NestedContainersAsyncClient = ::apache::thrift::Client<NestedContainers>;
} // cpp2
