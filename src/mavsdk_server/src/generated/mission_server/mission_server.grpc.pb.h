// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: mission_server/mission_server.proto
#ifndef GRPC_mission_5fserver_2fmission_5fserver_2eproto__INCLUDED
#define GRPC_mission_5fserver_2fmission_5fserver_2eproto__INCLUDED

#include "mission_server/mission_server.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace mavsdk {
namespace rpc {
namespace mission_server {

// Enable waypoint missions.
class MissionService final {
 public:
  static constexpr char const* service_full_name() {
    return "mavsdk.rpc.mission_server.MissionService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    //
    // Subscribe to when a new mission is uploaded (asynchronous).
    std::unique_ptr< ::grpc::ClientReaderInterface< ::mavsdk::rpc::mission_server::IncomingMissionResponse>> SubscribeIncomingMission(::grpc::ClientContext* context, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::mavsdk::rpc::mission_server::IncomingMissionResponse>>(SubscribeIncomingMissionRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::mission_server::IncomingMissionResponse>> AsyncSubscribeIncomingMission(::grpc::ClientContext* context, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::mission_server::IncomingMissionResponse>>(AsyncSubscribeIncomingMissionRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::mission_server::IncomingMissionResponse>> PrepareAsyncSubscribeIncomingMission(::grpc::ClientContext* context, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::mission_server::IncomingMissionResponse>>(PrepareAsyncSubscribeIncomingMissionRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      //
      // Subscribe to when a new mission is uploaded (asynchronous).
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void SubscribeIncomingMission(::grpc::ClientContext* context, ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* reactor) = 0;
      #else
      virtual void SubscribeIncomingMission(::grpc::ClientContext* context, ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest* request, ::grpc::experimental::ClientReadReactor< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientReaderInterface< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* SubscribeIncomingMissionRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* AsyncSubscribeIncomingMissionRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* PrepareAsyncSubscribeIncomingMissionRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReader< ::mavsdk::rpc::mission_server::IncomingMissionResponse>> SubscribeIncomingMission(::grpc::ClientContext* context, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::mavsdk::rpc::mission_server::IncomingMissionResponse>>(SubscribeIncomingMissionRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::mavsdk::rpc::mission_server::IncomingMissionResponse>> AsyncSubscribeIncomingMission(::grpc::ClientContext* context, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::mavsdk::rpc::mission_server::IncomingMissionResponse>>(AsyncSubscribeIncomingMissionRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::mavsdk::rpc::mission_server::IncomingMissionResponse>> PrepareAsyncSubscribeIncomingMission(::grpc::ClientContext* context, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::mavsdk::rpc::mission_server::IncomingMissionResponse>>(PrepareAsyncSubscribeIncomingMissionRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void SubscribeIncomingMission(::grpc::ClientContext* context, ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* reactor) override;
      #else
      void SubscribeIncomingMission(::grpc::ClientContext* context, ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest* request, ::grpc::experimental::ClientReadReactor< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientReader< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* SubscribeIncomingMissionRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest& request) override;
    ::grpc::ClientAsyncReader< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* AsyncSubscribeIncomingMissionRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* PrepareAsyncSubscribeIncomingMissionRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SubscribeIncomingMission_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    //
    // Subscribe to when a new mission is uploaded (asynchronous).
    virtual ::grpc::Status SubscribeIncomingMission(::grpc::ServerContext* context, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_SubscribeIncomingMission : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SubscribeIncomingMission() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SubscribeIncomingMission() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeIncomingMission(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubscribeIncomingMission(::grpc::ServerContext* context, ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest* request, ::grpc::ServerAsyncWriter< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SubscribeIncomingMission<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_SubscribeIncomingMission : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_SubscribeIncomingMission() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackServerStreamingHandler< ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest, ::mavsdk::rpc::mission_server::IncomingMissionResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest* request) { return this->SubscribeIncomingMission(context, request); }));
    }
    ~ExperimentalWithCallbackMethod_SubscribeIncomingMission() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeIncomingMission(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerWriteReactor< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* SubscribeIncomingMission(
      ::grpc::CallbackServerContext* /*context*/, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest* /*request*/)
    #else
    virtual ::grpc::experimental::ServerWriteReactor< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* SubscribeIncomingMission(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest* /*request*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_SubscribeIncomingMission<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_SubscribeIncomingMission<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SubscribeIncomingMission : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SubscribeIncomingMission() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SubscribeIncomingMission() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeIncomingMission(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SubscribeIncomingMission : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SubscribeIncomingMission() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SubscribeIncomingMission() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeIncomingMission(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubscribeIncomingMission(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_SubscribeIncomingMission : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_SubscribeIncomingMission() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const::grpc::ByteBuffer* request) { return this->SubscribeIncomingMission(context, request); }));
    }
    ~ExperimentalWithRawCallbackMethod_SubscribeIncomingMission() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeIncomingMission(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerWriteReactor< ::grpc::ByteBuffer>* SubscribeIncomingMission(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)
    #else
    virtual ::grpc::experimental::ServerWriteReactor< ::grpc::ByteBuffer>* SubscribeIncomingMission(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)
    #endif
      { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_SubscribeIncomingMission : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithSplitStreamingMethod_SubscribeIncomingMission() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::SplitServerStreamingHandler<
          ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest, ::mavsdk::rpc::mission_server::IncomingMissionResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerSplitStreamer<
                     ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest, ::mavsdk::rpc::mission_server::IncomingMissionResponse>* streamer) {
                       return this->StreamedSubscribeIncomingMission(context,
                         streamer);
                  }));
    }
    ~WithSplitStreamingMethod_SubscribeIncomingMission() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SubscribeIncomingMission(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest* /*request*/, ::grpc::ServerWriter< ::mavsdk::rpc::mission_server::IncomingMissionResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedSubscribeIncomingMission(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::mavsdk::rpc::mission_server::SubscribeIncomingMissionRequest,::mavsdk::rpc::mission_server::IncomingMissionResponse>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_SubscribeIncomingMission<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_SubscribeIncomingMission<Service > StreamedService;
};

}  // namespace mission_server
}  // namespace rpc
}  // namespace mavsdk


#endif  // GRPC_mission_5fserver_2fmission_5fserver_2eproto__INCLUDED