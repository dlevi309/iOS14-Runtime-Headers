/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@protocol AMSBagProtocol;
@class ACAccount, NSData;

@interface AMSAnisetteSyncTask : AMSTask {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	NSData* _data;
	long long _type;

}

@property (nonatomic,readonly) ACAccount * account;                 //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) NSData * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
-(ACAccount *)account;
-(id<AMSBagProtocol>)bag;
-(NSData *)data;
-(id)initWithData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4 ;
-(long long)type;
-(id)performSync;
@end

