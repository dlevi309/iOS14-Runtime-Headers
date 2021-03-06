/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteCoreML.framework/RemoteCoreML
*/


@interface _MLNetworkHeaderEncoding : NSObject
+(id)loadModel:(id)arg1 ;
+(id)custom:(id)arg1 ;
+(unsigned long long)getHeaderEncoding:(id)arg1 ;
+(unsigned long long)getHeaderDataSize:(id)arg1 ;
+(BOOL)isHeaderError:(unsigned long long)arg1 ;
+(id)acknowledgeFailData;
+(unsigned long long)getHeaderSize;
+(void*)getHeaderEnd:(id)arg1 ;
+(void*)getHeaderDataStart:(id)arg1 ;
+(BOOL)isHeaderAcknowledgeSucessData:(unsigned long long)arg1 ;
+(BOOL)isHeaderPredictFeature:(unsigned long long)arg1 ;
+(id)predictFeature:(id)arg1 ;
+(id)unLoadModel:(id)arg1 ;
+(id)textDebug:(id)arg1 ;
+(BOOL)isHeaderLoad:(unsigned long long)arg1 ;
+(BOOL)isHeaderUnLoad:(unsigned long long)arg1 ;
+(BOOL)isHeaderText:(unsigned long long)arg1 ;
+(id)acknowledgeSucessData;
+(id)constructDataPacket:(id)arg1 HeaderEncoding:(unsigned long long)arg2 ;
+(BOOL)isHeaderCustom:(unsigned long long)arg1 ;
+(BOOL)isHeaderAcknowledgeFailData:(unsigned long long)arg1 ;
+(BOOL)isHeaderIncomingData:(unsigned long long)arg1 ;
@end

