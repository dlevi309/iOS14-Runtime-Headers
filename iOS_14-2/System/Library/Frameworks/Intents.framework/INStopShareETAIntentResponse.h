/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INStopShareETAIntentResponseExport.h>

@class NSArray, NSString;

@interface INStopShareETAIntentResponse : INIntentResponse <INStopShareETAIntentResponseExport>

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * recipients; 
@property (assign,nonatomic) unsigned long long mediums; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(int)_typeFromCode:(long long)arg1 ;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(NSArray *)recipients;
-(id)init;
-(void)setRecipients:(NSArray *)arg1 ;
-(unsigned long long)mediums;
-(void)setMediums:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(long long)_codeWithName:(id)arg1 ;
-(long long)_intentResponseCode;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(id)propertiesByName;
-(id)initWithCoder:(id)arg1 ;
-(long long)code;
@end
