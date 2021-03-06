/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NEIKEv2PrivateNotify : NSObject <NSCopying> {

	unsigned short _notifyStatus;
	NSData* _notifyData;

}

@property (assign,nonatomic) unsigned short notifyStatus;              //@synthesize notifyStatus=_notifyStatus - In the implementation block
@property (nonatomic,retain) NSData * notifyData;                      //@synthesize notifyData=_notifyData - In the implementation block
-(void)setNotifyStatus:(unsigned short)arg1 ;
-(void)setNotifyData:(NSData *)arg1 ;
-(unsigned short)notifyStatus;
-(NSData *)notifyData;
-(id)initWithNotifyStatus:(unsigned short)arg1 notifyData:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

