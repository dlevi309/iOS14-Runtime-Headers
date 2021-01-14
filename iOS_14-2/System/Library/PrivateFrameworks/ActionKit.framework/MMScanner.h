/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSString, NSArray, NSMutableArray;

@interface MMScanner : NSObject {

	NSString* _string;
	NSArray* _lineRanges;
	unsigned long long _startLocation;
	unsigned long long _rangeIndex;
	NSMutableArray* _transactions;
	NSRange _currentRange;

}

@property (assign,nonatomic) unsigned long long startLocation;              //@synthesize startLocation=_startLocation - In the implementation block
@property (assign,nonatomic) NSRange currentRange;                          //@synthesize currentRange=_currentRange - In the implementation block
@property (nonatomic,readonly) NSRange currentLineRange; 
@property (assign,nonatomic) unsigned long long rangeIndex;                 //@synthesize rangeIndex=_rangeIndex - In the implementation block
@property (nonatomic,readonly) NSMutableArray * transactions;               //@synthesize transactions=_transactions - In the implementation block
@property (nonatomic,readonly) NSString * string;                           //@synthesize string=_string - In the implementation block
@property (nonatomic,copy,readonly) NSArray * lineRanges;                   //@synthesize lineRanges=_lineRanges - In the implementation block
@property (assign,nonatomic) unsigned long long location; 
+(id)scannerWithString:(id)arg1 ;
+(id)scannerWithString:(id)arg1 lineRanges:(id)arg2 ;
-(id)initWithString:(id)arg1 ;
-(void)beginTransaction;
-(void)advance;
-(unsigned short)nextCharacter;
-(NSMutableArray *)transactions;
-(unsigned long long)location;
-(unsigned long long)startLocation;
-(void)setStartLocation:(unsigned long long)arg1 ;
-(void)setCurrentRange:(NSRange)arg1 ;
-(void)setLocation:(unsigned long long)arg1 ;
-(NSString *)string;
-(id)nextWord;
-(NSRange)currentRange;
-(void)commitTransaction:(BOOL)arg1 ;
-(id)initWithString:(id)arg1 lineRanges:(id)arg2 ;
-(BOOL)atBeginningOfLine;
-(BOOL)atEndOfLine;
-(BOOL)atEndOfString;
-(unsigned short)previousCharacter;
-(id)previousWord;
-(id)previousWordWithCharactersFromSet:(id)arg1 ;
-(id)nextWordWithCharactersFromSet:(id)arg1 ;
-(void)advanceToNextLine;
-(BOOL)matchString:(id)arg1 ;
-(unsigned long long)skipCharactersFromSet:(id)arg1 ;
-(unsigned long long)skipCharactersFromSet:(id)arg1 max:(unsigned long long)arg2 ;
-(unsigned long long)skipEmptyLines;
-(unsigned long long)skipIndentationUpTo:(unsigned long long)arg1 ;
-(unsigned long long)skipNestedBracketsWithDelimiter:(unsigned short)arg1 ;
-(unsigned long long)skipToEndOfLine;
-(unsigned long long)skipToLastCharacterOfLine;
-(unsigned long long)skipWhitespace;
-(unsigned long long)skipWhitespaceAndNewlines;
-(id)_lineRangesForString:(id)arg1 ;
-(unsigned long long)_locationOfCharacter:(unsigned short)arg1 inRange:(NSRange)arg2 ;
-(NSRange)currentLineRange;
-(NSArray *)lineRanges;
-(unsigned long long)rangeIndex;
-(void)setRangeIndex:(unsigned long long)arg1 ;
@end
