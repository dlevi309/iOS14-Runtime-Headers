/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


#import <AppStoreKit/AppStoreKit-Structs.h>
@class NSMutableArray;

@interface _ASKResourceCacheGroup : NSObject {

	NSMutableArray* _memberContents;
	os_unfair_lock_s _guard;
	BOOL _hasMultipleMembers;

}

@property (assign) BOOL hasMultipleMembers;              //@synthesize hasMultipleMembers=_hasMultipleMembers - In the implementation block
-(id)init;
-(BOOL)hasMultipleMembers;
-(id)makeMemberContents;
-(id)snapshotMemberContents;
-(id)onlyMemberContents;
-(void)discardMemberContents:(id)arg1 ;
-(void)setHasMultipleMembers:(BOOL)arg1 ;
@end

