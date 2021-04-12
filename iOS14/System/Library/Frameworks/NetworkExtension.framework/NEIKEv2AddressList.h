/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSMutableArray;

@interface NEIKEv2AddressList : NSObject {

	NSMutableArray* _ipv6AddressList;
	NSMutableArray* _ipv4AddressList;
	unsigned long long _ipv6AddressIndex;
	unsigned long long _ipv4AddressIndex;

}

@property (retain) NSMutableArray * ipv6AddressList;                 //@synthesize ipv6AddressList=_ipv6AddressList - In the implementation block
@property (retain) NSMutableArray * ipv4AddressList;                 //@synthesize ipv4AddressList=_ipv4AddressList - In the implementation block
@property (assign) unsigned long long ipv6AddressIndex;              //@synthesize ipv6AddressIndex=_ipv6AddressIndex - In the implementation block
@property (assign) unsigned long long ipv4AddressIndex;              //@synthesize ipv4AddressIndex=_ipv4AddressIndex - In the implementation block
+(id)getSynthesizedIPv6Address:(id)arg1 outgoingIf:(unsigned long long)arg2 nat64Prefixes:(SCD_Struct_NE26*)arg3 numNat64Prefixes:(int)arg4 ;
+(id)normalizeServerAddress:(id)arg1 path:(id)arg2 ;
-(NSMutableArray *)ipv4AddressList;
-(void)setIpv4AddressList:(NSMutableArray *)arg1 ;
-(NSMutableArray *)ipv6AddressList;
-(void)setIpv6AddressList:(NSMutableArray *)arg1 ;
-(unsigned long long)ipv6AddressIndex;
-(void)setIpv6AddressIndex:(unsigned long long)arg1 ;
-(unsigned long long)ipv4AddressIndex;
-(void)setIpv4AddressIndex:(unsigned long long)arg1 ;
-(BOOL)addAddressToList:(id)arg1 ;
-(id)getNextAddressForPath:(id)arg1 ;
@end
