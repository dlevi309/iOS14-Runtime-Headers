/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

@class NSString, NSArray;


@protocol INSpeakable <NSObject>
@property (nonatomic,readonly) NSString * spokenPhrase; 
@property (nonatomic,readonly) NSString * pronunciationHint; 
@property (nonatomic,readonly) NSString * vocabularyIdentifier; 
@property (nonatomic,readonly) NSArray * alternativeSpeakableMatches; 
@property (nonatomic,readonly) NSString * identifier; 
@optional
-(NSString *)identifier;

@required
-(NSString *)pronunciationHint;
-(NSArray *)alternativeSpeakableMatches;
-(NSString *)spokenPhrase;
-(NSString *)vocabularyIdentifier;

@end

