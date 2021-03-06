/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class PKPaymentDeviceMetadata;

@interface PKPaymentDeviceMetadataFetchTask : NSObject {

	PKPaymentDeviceMetadata* _deviceMetadata;
	unsigned long long _remaningFields;
	unsigned long long _requestedFields;
	/*^block*/id _completion;

}

@property (nonatomic,retain) PKPaymentDeviceMetadata * deviceMetadata;              //@synthesize deviceMetadata=_deviceMetadata - In the implementation block
@property (assign,nonatomic) unsigned long long remaningFields;                     //@synthesize remaningFields=_remaningFields - In the implementation block
@property (assign,nonatomic) unsigned long long requestedFields;                    //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,copy) id completion;                                           //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(PKPaymentDeviceMetadata *)deviceMetadata;
-(void)setDeviceMetadata:(PKPaymentDeviceMetadata *)arg1 ;
-(unsigned long long)remaningFields;
-(void)setRemaningFields:(unsigned long long)arg1 ;
-(void)setRequestedFields:(unsigned long long)arg1 ;
-(unsigned long long)requestedFields;
@end

