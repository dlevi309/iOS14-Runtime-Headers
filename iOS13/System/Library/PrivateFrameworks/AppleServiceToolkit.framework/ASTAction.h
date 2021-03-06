/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/

#import <AppleServiceToolkit/AppleServiceToolkit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface ASTAction : NSObject <NSSecureCoding, NSCopying> {

	BOOL _finished;
	BOOL _generatedId;
	unsigned long long _progress;
	NSString* _action;
	NSString* _identifier;
	NSDictionary* _parameters;
	long long _resultCode;
	NSDictionary* _results;

}

@property (assign,nonatomic) BOOL generatedId;                              //@synthesize generatedId=_generatedId - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
@property (nonatomic,readonly) NSString * action;                           //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;                   //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) unsigned long long progress;                   //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long resultCode;                          //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,retain) NSDictionary * results;                        //@synthesize results=_results - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;               //@synthesize finished=_finished - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSDictionary *)results;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(unsigned long long)progress;
-(NSString *)action;
-(NSDictionary *)parameters;
-(NSDictionary *)dictionaryValue;
-(void)setProgress:(unsigned long long)arg1 ;
-(void)setResults:(NSDictionary *)arg1 ;
-(void)setResultCode:(long long)arg1 ;
-(long long)resultCode;
-(id)initWithAction:(id)arg1 data:(id)arg2 ;
-(BOOL)generatedId;
-(id)acceptableDecoderClasses;
-(void)setGeneratedId:(BOOL)arg1 ;
@end

