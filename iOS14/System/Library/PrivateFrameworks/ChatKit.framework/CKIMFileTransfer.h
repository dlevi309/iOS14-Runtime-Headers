/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKFileTransfer.h>

@protocol OS_dispatch_queue;
@class IMMessage, NSString, NSURL, NSDictionary, NSError, NSObject;

@interface CKIMFileTransfer : NSObject <CKFileTransfer> {

	int _mediaObjectCount;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	BOOL _isSticker;
	BOOL _fileDataReady;
	BOOL _fileURLFinalized;
	BOOL _restoring;
	BOOL _hideAttachment;
	BOOL _isDirectory;
	NSString* _guid;
	NSURL* _fileURL;
	NSString* _filename;
	NSError* _error;
	NSDictionary* _transcoderUserInfo;
	NSDictionary* _stickerUserInfo;
	unsigned long long _currentBytes;
	unsigned long long _totalBytes;
	long long _transferState;
	IMMessage* _imMessage;
	NSURL* _linkFileURL;
	NSDictionary* _attributionInfo;

}

@property (nonatomic,copy) NSURL * linkFileURL;                                              //@synthesize linkFileURL=_linkFileURL - In the implementation block
@property (assign,nonatomic) long long transferState;                                        //@synthesize transferState=_transferState - In the implementation block
@property (nonatomic,copy) NSDictionary * attributionInfo;                                   //@synthesize attributionInfo=_attributionInfo - In the implementation block
@property (nonatomic,retain) IMMessage * IMMessage;                                          //@synthesize imMessage=_imMessage - In the implementation block
@property (nonatomic,copy,readonly) NSString * guid;                                         //@synthesize guid=_guid - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fileURL;                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * filename;                                     //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * transcoderUserInfo;                       //@synthesize transcoderUserInfo=_transcoderUserInfo - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stickerUserInfo;                          //@synthesize stickerUserInfo=_stickerUserInfo - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long currentBytes;                              //@synthesize currentBytes=_currentBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long totalBytes;                                //@synthesize totalBytes=_totalBytes - In the implementation block
@property (nonatomic,readonly) BOOL isSticker;                                               //@synthesize isSticker=_isSticker - In the implementation block
@property (nonatomic,readonly) BOOL hideAttachment;                                          //@synthesize hideAttachment=_hideAttachment - In the implementation block
@property (nonatomic,readonly) BOOL isDirectory;                                             //@synthesize isDirectory=_isDirectory - In the implementation block
@property (getter=isFileURLFinalized,nonatomic,readonly) BOOL fileURLFinalized;              //@synthesize fileURLFinalized=_fileURLFinalized - In the implementation block
@property (getter=isFileDataReady,nonatomic,readonly) BOOL fileDataReady;                    //@synthesize fileDataReady=_fileDataReady - In the implementation block
@property (getter=isDownloadable,nonatomic,readonly) BOOL downloadable; 
@property (getter=isDownloading,nonatomic,readonly) BOOL downloading; 
@property (getter=isRestoring,nonatomic,readonly) BOOL restoring;                            //@synthesize restoring=_restoring - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fileManager;
-(id)syncController;
-(BOOL)isRestoring;
-(NSString *)guid;
-(IMMessage *)IMMessage;
-(id)notificationCenter;
-(void)mediaObjectRemoved;
-(void)mediaObjectAdded;
-(NSDictionary *)transcoderUserInfo;
-(BOOL)isFileURLFinalized;
-(void)fetchHighQualityFile:(/*^block*/id)arg1 ;
-(unsigned long long)totalBytes;
-(id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2 ;
-(id)initWithStickerFileURL:(id)arg1 transferUserInfo:(id)arg2 attributionInfo:(id)arg3 ;
-(unsigned long long)currentBytes;
-(NSURL *)linkFileURL;
-(id)imFileTransferCenter;
-(long long)transferState;
-(void)updateTransfer;
-(id)linkFileURLWithFilename:(id)arg1 ;
-(void)attachmentRestored:(id)arg1 ;
-(BOOL)hideAttachment;
-(void)setLinkFileURL:(NSURL *)arg1 ;
-(NSString *)filename;
-(void)transferUpdated:(id)arg1 ;
-(BOOL)isFileDataReady;
-(BOOL)isSticker;
-(NSError *)error;
-(void)setIMMessage:(IMMessage *)arg1 ;
-(NSURL *)fileURL;
-(BOOL)isDownloadable;
-(NSString *)description;
-(void)setTransferState:(long long)arg1 ;
-(id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(BOOL)arg4 ;
-(NSDictionary *)attributionInfo;
-(void)setAttributionInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)stickerUserInfo;
-(BOOL)isDownloading;
-(BOOL)isDirectory;
-(void)dealloc;
@end

