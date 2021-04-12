/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol UploadSessionDelegate;
@class NSArray, NSURL, NSDictionary, NSURLSession, NSMutableArray, NSMutableDictionary, NWPathEvaluator, NSString, NSDate, NSNumber;

@interface UploadSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate> {

	NSArray* _uploadingFilesInfo;
	NSURL* _uploadDestination;
	long long _urgencyFlag;
	NSDictionary* _extraHTTPHeaders;
	NSURLSession* _urlSession;
	NSMutableArray* _uploadSessionTasks;
	NSMutableDictionary* _uploadSessionTaskToFileUploadInfo;
	NWPathEvaluator* _primaryPathEvaluator;
	long long _primaryInterfaceType;
	BOOL _radarAPI;
	BOOL _consentWasRequired;
	id<UploadSessionDelegate> _uploadManager;
	NSString* _identifier;
	NSDate* _requestedTime;
	NSDate* _scheduledTime;
	NSDate* _completedTime;
	unsigned long long _apnsIdentifier;
	NSNumber* _radarID;

}

@property (assign,nonatomic,__weak) id<UploadSessionDelegate> uploadManager;              //@synthesize uploadManager=_uploadManager - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDate * requestedTime;                                      //@synthesize requestedTime=_requestedTime - In the implementation block
@property (nonatomic,retain) NSDate * scheduledTime;                                      //@synthesize scheduledTime=_scheduledTime - In the implementation block
@property (nonatomic,retain) NSDate * completedTime;                                      //@synthesize completedTime=_completedTime - In the implementation block
@property (assign,nonatomic) BOOL radarAPI;                                               //@synthesize radarAPI=_radarAPI - In the implementation block
@property (assign,nonatomic) BOOL consentWasRequired;                                     //@synthesize consentWasRequired=_consentWasRequired - In the implementation block
@property (assign,nonatomic) unsigned long long apnsIdentifier;                           //@synthesize apnsIdentifier=_apnsIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * radarID;                                          //@synthesize radarID=_radarID - In the implementation block
@property (nonatomic,readonly) NSArray * uploadingFilesInfo;                              //@synthesize uploadingFilesInfo=_uploadingFilesInfo - In the implementation block
@property (nonatomic,readonly) long long urgencyFlag;                                     //@synthesize urgencyFlag=_urgencyFlag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sessionConfigurationWithIdentifier:(id)arg1 urgency:(long long)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(NSDate *)scheduledTime;
-(void)setScheduledTime:(NSDate *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSNumber *)radarID;
-(NSString *)identifier;
-(void)dealloc;
-(NSDate *)requestedTime;
-(void)setRadarID:(NSNumber *)arg1 ;
-(unsigned long long)apnsIdentifier;
-(void)setApnsIdentifier:(unsigned long long)arg1 ;
-(id)uploadTaskForFileInfo:(id)arg1 ;
-(id)destinationURLForFile:(id)arg1 ;
-(BOOL)radarAPI;
-(id<UploadSessionDelegate>)uploadManager;
-(BOOL)_allFilesUploaded;
-(void)setCompletedTime:(NSDate *)arg1 ;
-(id)initWithFilesToUpload:(id)arg1 destination:(id)arg2 urgency:(long long)arg3 additionalHTTPHeaders:(id)arg4 ;
-(void)prepareUploadSession;
-(void)startUploadSession;
-(void)setUploadManager:(id<UploadSessionDelegate>)arg1 ;
-(void)setRequestedTime:(NSDate *)arg1 ;
-(NSDate *)completedTime;
-(void)setRadarAPI:(BOOL)arg1 ;
-(BOOL)consentWasRequired;
-(void)setConsentWasRequired:(BOOL)arg1 ;
-(NSArray *)uploadingFilesInfo;
-(long long)urgencyFlag;
@end
