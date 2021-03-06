/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@class NSSet, CXCallObserver, NSString;

@interface CTCallCenter : NSObject <CXCallObserverDelegate> {

	queue* _queue;
	queue* clientQueue;
	NSSet* _currentCalls;
	/*^block*/id _callEventHandler;
	CXCallObserver* _callKitObserver;

}

@property (retain) CXCallObserver * callKitObserver;                //@synthesize callKitObserver=_callKitObserver - In the implementation block
@property (retain) NSSet * currentCalls; 
@property (nonatomic,copy) id callEventHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)currentCalls;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 ;
-(void)initialize;
-(void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)arg1 ;
-(CXCallObserver *)callKitObserver;
-(BOOL)getCurrentCallSetFromServer_sync:(id)arg1 ;
-(id)callEventHandler;
-(void)handleCallStatusChange_sync:(id)arg1 ;
-(id)init;
-(BOOL)calculateCallStateChanges_sync:(id)arg1 ;
-(void)setCallEventHandler:(id)arg1 ;
-(void)setCallKitObserver:(CXCallObserver *)arg1 ;
-(void)setCurrentCalls:(NSSet *)arg1 ;
-(NSString *)description;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(void)dealloc;
@end

