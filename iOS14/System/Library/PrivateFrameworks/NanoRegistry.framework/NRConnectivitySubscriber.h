/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@interface NRConnectivitySubscriber : NSObject {

	BOOL _connected;
	unsigned long long _dropoutCounter;

}
+(BOOL)getDropoutCounter:(unsigned long long*)arg1 ;
-(id)init;
@end
