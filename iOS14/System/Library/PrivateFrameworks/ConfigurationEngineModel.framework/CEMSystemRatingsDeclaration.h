/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMSystemRatingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadRatingRegion;
	NSNumber* _payloadRatingApps;
	NSNumber* _payloadRatingMovies;
	NSNumber* _payloadRatingTVShows;
	NSNumber* _payloadAllowExplicitContent;
	NSNumber* _payloadAllowShowingUndownloadedTV;
	NSNumber* _payloadAllowShowingUndownloadedMovies;

}

@property (nonatomic,copy) NSString * payloadRatingRegion;                                //@synthesize payloadRatingRegion=_payloadRatingRegion - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRatingApps;                                  //@synthesize payloadRatingApps=_payloadRatingApps - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRatingMovies;                                //@synthesize payloadRatingMovies=_payloadRatingMovies - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRatingTVShows;                               //@synthesize payloadRatingTVShows=_payloadRatingTVShows - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowExplicitContent;                        //@synthesize payloadAllowExplicitContent=_payloadAllowExplicitContent - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowShowingUndownloadedTV;                  //@synthesize payloadAllowShowingUndownloadedTV=_payloadAllowShowingUndownloadedTV - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowShowingUndownloadedMovies;              //@synthesize payloadAllowShowingUndownloadedMovies=_payloadAllowShowingUndownloadedMovies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)profileType;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withRatingRegion:(id)arg2 withRatingApps:(id)arg3 withRatingMovies:(id)arg4 withRatingTVShows:(id)arg5 withAllowExplicitContent:(id)arg6 withAllowShowingUndownloadedTV:(id)arg7 withAllowShowingUndownloadedMovies:(id)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadRatingRegion:(NSString *)arg1 ;
-(void)setPayloadRatingApps:(NSNumber *)arg1 ;
-(void)setPayloadRatingMovies:(NSNumber *)arg1 ;
-(void)setPayloadRatingTVShows:(NSNumber *)arg1 ;
-(void)setPayloadAllowExplicitContent:(NSNumber *)arg1 ;
-(void)setPayloadAllowShowingUndownloadedTV:(NSNumber *)arg1 ;
-(void)setPayloadAllowShowingUndownloadedMovies:(NSNumber *)arg1 ;
-(NSString *)payloadRatingRegion;
-(NSNumber *)payloadRatingApps;
-(NSNumber *)payloadRatingMovies;
-(NSNumber *)payloadRatingTVShows;
-(NSNumber *)payloadAllowExplicitContent;
-(NSNumber *)payloadAllowShowingUndownloadedTV;
-(NSNumber *)payloadAllowShowingUndownloadedMovies;
@end
