/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoding.framework/IMTranscoding
*/

#import <IMTranscoding/IMTranscoding-Structs.h>
#import <IMTranscoding/IMGifFileWriter.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSString;

@interface IMTranscodeController : NSObject <IMGifFileWriter> {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(BOOL)_connect;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)generatePreview:(id)arg1 previewURL:(id)arg2 constraints:(IMPreviewConstraints)arg3 completionBlock:(/*^block*/id)arg4 blockUntilReply:(BOOL)arg5 ;
-(void)_disconnected;
-(BOOL)copyGifFileFromSourcePath:(id)arg1 toDestinationPath:(id)arg2 error:(id*)arg3 ;
-(void)transcodeFallbackFileTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)transcodeFallbackFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 commonCapabilities:(id)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 representations:(long long)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 commonCapabilities:(id)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 representations:(long long)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)decodeiMessageAppPayload:(id)arg1 bundleID:(id)arg2 completionBlock:(/*^block*/id)arg3 blockUntilReply:(BOOL)arg4 ;
-(void)generateSnapshotForMessageGUID:(id)arg1 payloadURL:(id)arg2 balloonBundleID:(id)arg3 isFromMe:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)sizePreview:(id)arg1 constraints:(IMPreviewConstraints)arg2 completionBlock:(/*^block*/id)arg3 blockUntilReply:(BOOL)arg4 ;
-(void)validateTextRenderingForMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 blockUntilReply:(BOOL)arg3 ;
-(void)transcodeLocalTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)validateTextRenderingForMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)generatePreview:(id)arg1 previewURL:(id)arg2 constraints:(IMPreviewConstraints)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)sizePreview:(id)arg1 constraints:(IMPreviewConstraints)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_validateFileTransfer:(id)arg1 utiType:(id)arg2 retries:(int)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_validateTextRenderingForMessage:(id)arg1 retries:(int)arg2 completionBlock:(/*^block*/id)arg3 blockUntilReply:(BOOL)arg4 ;
-(void)_transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 commonCapabilities:(id)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 representations:(long long)arg9 fallBack:(BOOL)arg10 retries:(int)arg11 completionBlock:(/*^block*/id)arg12 ;
-(void)_transcodeFileTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 retries:(unsigned long long)arg4 fallBack:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_generatePreview:(id)arg1 previewURL:(id)arg2 constraints:(IMPreviewConstraints)arg3 retries:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5 blockUntilReply:(BOOL)arg6 ;
-(void)sizePreview:(id)arg1 constraints:(IMPreviewConstraints)arg2 retries:(unsigned long long)arg3 completionBlock:(/*^block*/id)arg4 blockUntilReply:(BOOL)arg5 ;
-(void)copyGifFileFromSourcePath:(id)arg1 toDestinationPath:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_decodeiMessageAppPayload:(id)arg1 bundleID:(id)arg2 retries:(unsigned long long)arg3 completionBlock:(/*^block*/id)arg4 blockUntilReply:(BOOL)arg5 ;
@end
