/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface CRKFetchControlGroupIdentifiersRequest : CATTaskRequest {

	BOOL _includeTemporary;
	NSString* _leaderIdentifier;

}

@property (nonatomic,copy) NSString * leaderIdentifier;              //@synthesize leaderIdentifier=_leaderIdentifier - In the implementation block
@property (assign,nonatomic) BOOL includeTemporary;                  //@synthesize includeTemporary=_includeTemporary - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)includeTemporary;
-(NSString *)leaderIdentifier;
-(void)setLeaderIdentifier:(NSString *)arg1 ;
-(void)setIncludeTemporary:(BOOL)arg1 ;
@end

