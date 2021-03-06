/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/CKCodeOperationMessageMutation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ABCPbSigConfigWhitelist, NSMutableArray, NSString;

@interface ABCPbSigGrantResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying> {

	int _globalDecision;
	ABCPbSigConfigWhitelist* _sigConfigWhitelist;
	NSMutableArray* _sigResponses;
	NSString* _status;
	SCD_Struct_AB4 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasGlobalDecision; 
@property (assign,nonatomic) int globalDecision;                                        //@synthesize globalDecision=_globalDecision - In the implementation block
@property (nonatomic,readonly) BOOL hasStatus; 
@property (nonatomic,retain) NSString * status;                                         //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableArray * sigResponses;                             //@synthesize sigResponses=_sigResponses - In the implementation block
@property (nonatomic,readonly) BOOL hasSigConfigWhitelist; 
@property (nonatomic,retain) ABCPbSigConfigWhitelist * sigConfigWhitelist;              //@synthesize sigConfigWhitelist=_sigConfigWhitelist - In the implementation block
+(Class)sigResponseType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasStatus;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)status;
-(int)globalDecision;
-(void)setGlobalDecision:(int)arg1 ;
-(void)setHasGlobalDecision:(BOOL)arg1 ;
-(BOOL)hasGlobalDecision;
-(id)globalDecisionAsString:(int)arg1 ;
-(int)StringAsGlobalDecision:(id)arg1 ;
-(void)addSigResponse:(id)arg1 ;
-(unsigned long long)sigResponsesCount;
-(void)clearSigResponses;
-(id)sigResponseAtIndex:(unsigned long long)arg1 ;
-(void)setSigConfigWhitelist:(ABCPbSigConfigWhitelist *)arg1 ;
-(BOOL)hasSigConfigWhitelist;
-(NSMutableArray *)sigResponses;
-(void)setSigResponses:(NSMutableArray *)arg1 ;
-(ABCPbSigConfigWhitelist *)sigConfigWhitelist;
@end

