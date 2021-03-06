/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSNumber, CKRecord;

@interface FCTagSettingsEntry : NSObject {

	BOOL _webAccessOptIn;
	NSString* _identifier;
	NSString* _tagID;
	NSNumber* _fontMultiplier;
	NSNumber* _fontMultiplierMacOS;
	NSNumber* _contentScale;
	NSNumber* _contentScaleMacOS;
	NSString* _accessToken;

}

@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * tagID;                            //@synthesize tagID=_tagID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * fontMultiplier;                   //@synthesize fontMultiplier=_fontMultiplier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * fontMultiplierMacOS;              //@synthesize fontMultiplierMacOS=_fontMultiplierMacOS - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * contentScale;                     //@synthesize contentScale=_contentScale - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * contentScaleMacOS;                //@synthesize contentScaleMacOS=_contentScaleMacOS - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessToken;                      //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,readonly) BOOL webAccessOptIn;                              //@synthesize webAccessOptIn=_webAccessOptIn - In the implementation block
@property (nonatomic,readonly) CKRecord * asCKRecord; 
-(id)dictionaryRepresentation;
-(NSString *)tagID;
-(NSNumber *)fontMultiplier;
-(NSNumber *)fontMultiplierMacOS;
-(NSNumber *)contentScaleMacOS;
-(NSString *)accessToken;
-(BOOL)webAccessOptIn;
-(id)initWithEntryID:(id)arg1 tagID:(id)arg2 fontMultiplier:(id)arg3 fontMultiplierMacOS:(id)arg4 contentScale:(id)arg5 contentScaleMacOS:(id)arg6 accessToken:(id)arg7 webAccessOptIn:(BOOL)arg8 ;
-(id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(CKRecord *)asCKRecord;
-(NSString *)identifier;
-(NSNumber *)contentScale;
@end

