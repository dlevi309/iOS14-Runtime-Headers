/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/


@class ICSTokenizer, NSData;

@interface ICSParser : NSObject {

	unsigned long long _options;
	ICSTokenizer* _lexer;
	NSData* _data;

}

@property (nonatomic,readonly) ICSTokenizer * lexer;              //@synthesize lexer=_lexer - In the implementation block
+(id)entitiesFromNSData:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithData:(id)arg1 options:(unsigned long long)arg2 ;
-(void)parseParameter:(id)arg1 ;
-(BOOL)createPropertyType:(int)arg1 component:(id)arg2 withName:(id)arg3 ;
-(void)_parseComponent:(id)arg1 depth:(unsigned long long)arg2 fatalError:(BOOL*)arg3 ;
-(id)makeComponent:(char*)arg1 ;
-(BOOL)parseProperty:(id)arg1 ;
-(void)_parseComponent:(id)arg1 ;
-(id)parseData;
-(ICSTokenizer *)lexer;
@end

