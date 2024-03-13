/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/service-schema/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/service-schema/gen-cpp2/PrimitivesService.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, ::std::int64_t*>, apache::thrift::FieldData<2, ::apache::thrift::type_class::integral, ::std::int64_t*>> PrimitivesService_init_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, ::std::int64_t*>> PrimitivesService_init_presult;
typedef apache::thrift::ThriftPresult<false> PrimitivesService_method_that_throws_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::enumeration, ::cpp2::Result*>, apache::thrift::FieldData<1, ::apache::thrift::type_class::structure, ::cpp2::CustomException>> PrimitivesService_method_that_throws_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, ::std::int64_t*>> PrimitivesService_return_void_method_pargs;
typedef apache::thrift::ThriftPresult<true> PrimitivesService_return_void_method_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void PrimitivesServiceAsyncProcessor::setUpAndProcess_init(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &PrimitivesServiceAsyncProcessor::executeRequest_init<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PrimitivesServiceAsyncProcessor::executeRequest_init(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::PrimitivesService_init_pargs args;
  ::std::int64_t uarg_param0{0};
  args.get<0>().value = &uarg_param0;
  ::std::int64_t uarg_param1{0};
  args.get<1>().value = &uarg_param1;
  apache::thrift::ContextStack::UniquePtr ctxStack(this->getContextStack(this->getServiceName(), "PrimitivesService.init", serverRequest.requestContext()));
  try {
    deserializeRequest<ProtocolIn_>(args, "init", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    folly::exception_wrapper ew(std::current_exception());
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "init");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<::std::int64_t>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_init<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_init<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_init(std::move(callback), args.get<0>().ref(), args.get<1>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse PrimitivesServiceAsyncProcessor::return_init(apache::thrift::ContextStack* ctx, ::std::int64_t const& _return) {
  ProtocolOut_ prot;
  ::cpp2::PrimitivesService_init_presult result;
  result.get<0>().value = const_cast<::std::int64_t*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("init", &prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void PrimitivesServiceAsyncProcessor::throw_wrapped_init(apache::thrift::ResponseChannelRequest::UniquePtr req,[[maybe_unused]] int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "init");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PrimitivesServiceAsyncProcessor::setUpAndProcess_method_that_throws(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &PrimitivesServiceAsyncProcessor::executeRequest_method_that_throws<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PrimitivesServiceAsyncProcessor::executeRequest_method_that_throws(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::PrimitivesService_method_that_throws_pargs args;
  apache::thrift::ContextStack::UniquePtr ctxStack(this->getContextStack(this->getServiceName(), "PrimitivesService.method_that_throws", serverRequest.requestContext()));
  try {
    deserializeRequest<ProtocolIn_>(args, "method_that_throws", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    folly::exception_wrapper ew(std::current_exception());
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "method_that_throws");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<::cpp2::Result>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_method_that_throws<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_method_that_throws<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_method_that_throws(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse PrimitivesServiceAsyncProcessor::return_method_that_throws(apache::thrift::ContextStack* ctx, ::cpp2::Result const& _return) {
  ProtocolOut_ prot;
  ::cpp2::PrimitivesService_method_that_throws_presult result;
  result.get<0>().value = const_cast<::cpp2::Result*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("method_that_throws", &prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void PrimitivesServiceAsyncProcessor::throw_wrapped_method_that_throws(apache::thrift::ResponseChannelRequest::UniquePtr req,[[maybe_unused]] int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ::cpp2::PrimitivesService_method_that_throws_presult result;
  if (ew.with_exception([&]( ::cpp2::CustomException& e) {
    if (ctx) {
      ctx->userExceptionWrapped(true, ew);
    }
    ::apache::thrift::util::appendExceptionToHeader(ew, *reqCtx);
    ::apache::thrift::util::appendErrorClassificationToHeader< ::cpp2::CustomException>(ew, *reqCtx);
    result.get<1>().ref() = e;
    result.setIsSet(1, true);
  }
  )) {} else
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "method_that_throws");
    return;
  }
  ProtocolOut_ prot;
  auto response = serializeResponse("method_that_throws", &prot, ctx, result);
  auto payload = std::move(response).extractPayload(
      req->includeEnvelope(), prot.protocolType(), protoSeqId, apache::thrift::MessageType::T_REPLY, "method_that_throws");
  payload.transform(reqCtx->getHeader()->getWriteTransforms());
  return req->sendReply(std::move(payload));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PrimitivesServiceAsyncProcessor::setUpAndProcess_return_void_method(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &PrimitivesServiceAsyncProcessor::executeRequest_return_void_method<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void PrimitivesServiceAsyncProcessor::executeRequest_return_void_method(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::PrimitivesService_return_void_method_pargs args;
  ::std::int64_t uarg_id{0};
  args.get<0>().value = &uarg_id;
  apache::thrift::ContextStack::UniquePtr ctxStack(this->getContextStack(this->getServiceName(), "PrimitivesService.return_void_method", serverRequest.requestContext()));
  try {
    deserializeRequest<ProtocolIn_>(args, "return_void_method", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    folly::exception_wrapper ew(std::current_exception());
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "return_void_method");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_return_void_method<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_return_void_method<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_return_void_method(std::move(callback), args.get<0>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse PrimitivesServiceAsyncProcessor::return_return_void_method(apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  ::cpp2::PrimitivesService_return_void_method_presult result;
  return serializeResponse("return_void_method", &prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void PrimitivesServiceAsyncProcessor::throw_wrapped_return_void_method(apache::thrift::ResponseChannelRequest::UniquePtr req,[[maybe_unused]] int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "return_void_method");
    return;
  }
}


} // cpp2