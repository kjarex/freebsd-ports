--- src/Socket_p.h.orig	2022-04-14 03:31:38 UTC
+++ src/Socket_p.h
@@ -548,7 +548,7 @@ namespace Arcus
 
         google::protobuf::io::ArrayInputStream array(wire_message->data, wire_message->size);
         google::protobuf::io::CodedInputStream stream(&array);
-        stream.SetTotalBytesLimit(message_size_maximum, message_size_warning);
+        stream.SetTotalBytesLimit(message_size_maximum);
         if(!message->ParseFromCodedStream(&stream))
         {
             error(ErrorCode::ParseFailedError, "Failed to parse message:" + std::string(wire_message->data));
