/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoSetExpressPassRequest : PBRequest <NSCopying> {

	NSString* _applicationIdentifier;
	NSData* _expressPassInformation;
	NSString* _uniqueID;
	BOOL _cancelOutstandingRequests;
	BOOL _requestAuthorization;
	SCD_Struct_NP1 _has;

}

@property (nonatomic,readonly) BOOL hasUniqueID; 
@property (nonatomic,retain) NSString * uniqueID;                            //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) BOOL hasCancelOutstandingRequests; 
@property (assign,nonatomic) BOOL cancelOutstandingRequests;                 //@synthesize cancelOutstandingRequests=_cancelOutstandingRequests - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationIdentifier; 
@property (nonatomic,retain) NSString * applicationIdentifier;               //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasRequestAuthorization; 
@property (assign,nonatomic) BOOL requestAuthorization;                      //@synthesize requestAuthorization=_requestAuthorization - In the implementation block
@property (nonatomic,readonly) BOOL hasExpressPassInformation; 
@property (nonatomic,retain) NSData * expressPassInformation;                //@synthesize expressPassInformation=_expressPassInformation - In the implementation block
-(id)dictionaryRepresentation;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(BOOL)cancelOutstandingRequests;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)applicationIdentifier;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasApplicationIdentifier;
-(BOOL)hasUniqueID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)requestAuthorization;
-(void)setRequestAuthorization:(BOOL)arg1 ;
-(void)setHasRequestAuthorization:(BOOL)arg1 ;
-(BOOL)hasRequestAuthorization;
-(void)setExpressPassInformation:(NSData *)arg1 ;
-(BOOL)hasExpressPassInformation;
-(NSData *)expressPassInformation;
-(void)setCancelOutstandingRequests:(BOOL)arg1 ;
-(void)setHasCancelOutstandingRequests:(BOOL)arg1 ;
-(BOOL)hasCancelOutstandingRequests;
@end

