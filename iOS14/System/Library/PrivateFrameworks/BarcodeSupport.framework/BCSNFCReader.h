/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <libobjc.A.dylib/NFReaderSessionDelegate.h>

@protocol BCSNFCReaderDelegate, OS_dispatch_queue, NFSession, OS_os_transaction;
@class NSObject, NFReaderSession, NSMutableArray, CPSClipRequest, NSTimer, BCSNotificationService, NSString;

@interface BCSNFCReader : NSObject <NFReaderSessionDelegate> {

	id<BCSNFCReaderDelegate> _delegate;
	long long _state;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _disconnectQueue;
	id<NFSession> _tentativeSession;
	NFReaderSession* _session;
	NSMutableArray* _urlQueue;
	CPSClipRequest* _clipRequest;
	NSTimer* _reactivateTimer;
	NSObject*<OS_os_transaction> _transaction;
	long long _sessionErrorCount;
	BCSNotificationService* _notificationService;
	double _postNotificationReactivationDelay;
	double _dismissProxCardReactivationDelay;

}

@property (nonatomic,readonly) long long state; 
@property (assign,nonatomic,__weak) BCSNotificationService * notificationService;              //@synthesize notificationService=_notificationService - In the implementation block
@property (assign,nonatomic) double postNotificationReactivationDelay;                         //@synthesize postNotificationReactivationDelay=_postNotificationReactivationDelay - In the implementation block
@property (assign,nonatomic) double dismissProxCardReactivationDelay;                          //@synthesize dismissProxCardReactivationDelay=_dismissProxCardReactivationDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 ;
-(void)_restart;
-(void)startReading;
-(long long)state;
-(BOOL)_isWaiting;
-(BOOL)_startPolling;
-(void)_stopPolling;
-(void)readerSession:(id)arg1 didDetectTags:(id)arg2 ;
-(void)readerSessionDidEndUnexpectedly:(id)arg1 reason:(id)arg2 ;
-(void)readerSession:(id)arg1 externalReaderFieldNotification:(id)arg2 ;
-(BOOL)_readTag:(id)arg1 ;
-(void)dealloc;
-(void)_performBlockOnQueue:(/*^block*/id)arg1 ;
-(void)_setStateAndNotifyDelegate:(long long)arg1 ;
-(void)_startReading;
-(void)_stopReadingAndTransitionToState:(long long)arg1 ;
-(void)_didDetectTags:(id)arg1 ;
-(void)_startProcessingURLs;
-(void)_restartPolling;
-(void)_disconnectTagAndBlockReadingUntilRemoved;
-(void)_disconnectTag;
-(void)_processNextURL;
-(void)_requestNotificationForURLRecord:(id)arg1 ;
-(void)_didFindLink;
-(void)_requestAppClipForURLRecord:(id)arg1 ;
-(void)_scheduleReactivationWithDelay:(double)arg1 ;
-(void)stopReading;
-(BCSNotificationService *)notificationService;
-(void)setNotificationService:(BCSNotificationService *)arg1 ;
-(double)postNotificationReactivationDelay;
-(void)setPostNotificationReactivationDelay:(double)arg1 ;
-(double)dismissProxCardReactivationDelay;
-(void)setDismissProxCardReactivationDelay:(double)arg1 ;
@end
