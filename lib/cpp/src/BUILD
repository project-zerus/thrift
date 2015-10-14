cc_library(
  name = 'libthrift',
  visibility = ['//visibility:public'],
  deps = [
    '//external:boost'
  ],
  srcs = [
    'thrift/TApplicationException.cpp',
    'thrift/TOutput.cpp',
    'thrift/VirtualProfiling.cpp',

    'thrift/processor/PeekProcessor.cpp',

    'thrift/protocol/TBase64Utils.cpp',
    'thrift/protocol/TDebugProtocol.cpp',
    'thrift/protocol/TJSONProtocol.cpp',
    'thrift/protocol/TMultiplexedProtocol.cpp',
    'thrift/protocol/TProtocol.cpp',

    'thrift/transport/TBufferTransports.cpp',
    'thrift/transport/TFDTransport.cpp',
    'thrift/transport/TFileTransport.cpp',
    'thrift/transport/THttpClient.cpp',
    'thrift/transport/THttpServer.cpp',
    'thrift/transport/THttpTransport.cpp',
    'thrift/transport/TPipe.cpp',
    'thrift/transport/TPipeServer.cpp',
    'thrift/transport/TServerSocket.cpp',
    'thrift/transport/TSimpleFileTransport.cpp',
    'thrift/transport/TSocket.cpp',
    'thrift/transport/TSocketPool.cpp',
    'thrift/transport/TTransportException.cpp',
    'thrift/transport/TTransportUtils.cpp',
    'thrift/transport/TZlibTransport.cpp',

    'thrift/server/TConnectedClient.cpp',
    'thrift/server/TServer.cpp',
    'thrift/server/TServerFramework.cpp',
    'thrift/server/TSimpleServer.cpp',
    'thrift/server/TThreadedServer.cpp',
    'thrift/server/TThreadPoolServer.cpp',

    'thrift/async/TAsyncChannel.cpp',
    'thrift/async/TAsyncProtocolProcessor.cpp',
    'thrift/async/TConcurrentClientSyncInfo.cpp',

    'thrift/concurrency/Monitor.cpp',
    'thrift/concurrency/Mutex.cpp',
    'thrift/concurrency/PosixThreadFactory.cpp',
    'thrift/concurrency/ThreadManager.cpp',
    'thrift/concurrency/TimerManager.cpp',
    'thrift/concurrency/Util.cpp',
  ],
  includes = [
    '.'
  ],
)
