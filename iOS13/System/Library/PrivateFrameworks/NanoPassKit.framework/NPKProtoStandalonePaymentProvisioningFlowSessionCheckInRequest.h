/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandaloneResponseHeader;

@interface NPKProtoStandalonePaymentProvisioningFlowSessionCheckInRequest : PBRequest <NSCopying> {

	NPKProtoStandaloneResponseHeader* _requestHeader;

}

@property (nonatomic,retain) NPKProtoStandaloneResponseHeader * requestHeader;              //@synthesize requestHeader=_requestHeader - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NPKProtoStandaloneResponseHeader *)requestHeader;
-(void)setRequestHeader:(NPKProtoStandaloneResponseHeader *)arg1 ;
@end

