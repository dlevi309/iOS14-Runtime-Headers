/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFCommandExecutionInfoMutating.h>

@class AFCommandExecutionInfo, NSString, AFPeerInfo, NSDictionary;

@interface _AFCommandExecutionInfoMutation : NSObject <AFCommandExecutionInfoMutating> {

	AFCommandExecutionInfo* _baseModel;
	NSString* _executionID;
	NSString* _requestID;
	AFPeerInfo* _originPeerInfo;
	NSDictionary* _userInfo;
	struct {
		unsigned isDirty : 1;
		unsigned hasExecutionID : 1;
		unsigned hasRequestID : 1;
		unsigned hasOriginPeerInfo : 1;
		unsigned hasUserInfo : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(id)arg1 ;
-(id)init;
-(void)setRequestID:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setExecutionID:(id)arg1 ;
-(void)setOriginPeerInfo:(id)arg1 ;
@end

