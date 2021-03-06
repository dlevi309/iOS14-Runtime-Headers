/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@class NSString;

@interface MapsSuggestionsTrafficAndETAResult : NSObject {

	BOOL _isSuccess;
	double _seconds;
	NSString* _shortTrafficString;
	NSString* _longTrafficString;
	NSString* _writtenRouteName;
	NSString* _spokenRouteName;

}

@property (assign,nonatomic) BOOL isSuccess;                           //@synthesize isSuccess=_isSuccess - In the implementation block
@property (assign,nonatomic) double seconds;                           //@synthesize seconds=_seconds - In the implementation block
@property (nonatomic,copy) NSString * shortTrafficString;              //@synthesize shortTrafficString=_shortTrafficString - In the implementation block
@property (nonatomic,copy) NSString * longTrafficString;               //@synthesize longTrafficString=_longTrafficString - In the implementation block
@property (nonatomic,copy) NSString * writtenRouteName;                //@synthesize writtenRouteName=_writtenRouteName - In the implementation block
@property (nonatomic,copy) NSString * spokenRouteName;                 //@synthesize spokenRouteName=_spokenRouteName - In the implementation block
-(double)seconds;
-(BOOL)isSuccess;
-(void)setIsSuccess:(BOOL)arg1 ;
-(NSString *)shortTrafficString;
-(void)setShortTrafficString:(NSString *)arg1 ;
-(NSString *)longTrafficString;
-(void)setLongTrafficString:(NSString *)arg1 ;
-(NSString *)writtenRouteName;
-(NSString *)spokenRouteName;
-(void)setWrittenRouteName:(NSString *)arg1 ;
-(void)setSpokenRouteName:(NSString *)arg1 ;
-(void)setSeconds:(double)arg1 ;
-(id)initWithGEOTrafficAndETAResult:(id)arg1 ;
@end

