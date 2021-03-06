/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCExpressTransactionEndedEvent, NSString;

@interface NFAWDExpressTransactionEndedEvent : NSObject <NFAWDEventProtocol> {

	unsigned _type;
	AWDNFCExpressTransactionEndedEvent* _metric;

}

@property (assign,nonatomic) unsigned type;                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) AWDNFCExpressTransactionEndedEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(AWDNFCExpressTransactionEndedEvent *)metric;
-(void)setMetric:(AWDNFCExpressTransactionEndedEvent *)arg1 ;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateExpressTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end

