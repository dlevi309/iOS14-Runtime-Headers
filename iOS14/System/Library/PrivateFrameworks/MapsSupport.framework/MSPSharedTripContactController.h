/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol MSPSharedTripXPCServer, OS_dispatch_queue, MSPSharedTripContactControllerDelegate;
@class NSMutableOrderedSet, NSSet, NSMutableSet, NSObject, NSOrderedSet;

@interface MSPSharedTripContactController : NSObject {

	NSMutableOrderedSet* _contactsValues;
	NSSet* _activeHandles;
	NSMutableSet* _pendingContacts;
	id<MSPSharedTripXPCServer> _sharedTripServer;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	id<MSPSharedTripContactControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MSPSharedTripContactControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * activeContactsValues; 
-(id<MSPSharedTripContactControllerDelegate>)delegate;
-(void)setDelegate:(id<MSPSharedTripContactControllerDelegate>)arg1 ;
-(id)_activeContactsValues;
-(void)_shareWithContactValue:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_contactIsActive:(id)arg1 ;
-(void)_didStartSharingWithContact:(id)arg1 withCapabilityType:(unsigned long long)arg2 error:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_existingValueForContact:(id)arg1 ;
-(void)_notifyDelegateContactsChanged;
-(void)_stopSharingWithContactValue:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_stopAllSharingWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateActiveSharingHandles:(id)arg1 ;
-(id)initWithSharedTripServer:(id)arg1 ;
-(void)shareWithContactValue:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopSharingWithContactValue:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopAllSharingWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSOrderedSet *)activeContactsValues;
-(BOOL)contactIsActive:(id)arg1 ;
-(void)updateActiveSharingHandles:(id)arg1 ;
@end
