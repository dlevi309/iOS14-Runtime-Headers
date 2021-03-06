/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCColor : NSObject <NSCopying> {

	double _red;
	double _green;
	double _blue;
	double _alpha;

}

@property (nonatomic,readonly) double red;                  //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) double green;                //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) double blue;                 //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) double alpha;                //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,readonly) NSString * hex; 
+(id)colorWithHexString:(id)arg1 ;
+(id)blackColor;
+(id)clearColor;
+(id)nullableColorWithHexString:(id)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithPBColor:(id)arg1 ;
+(id)whiteColor;
-(NSString *)hex;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(double)red;
-(id)init;
-(double)alpha;
-(BOOL)isSimilarToColor:(id)arg1 withinPercentage:(double)arg2 ;
-(void)readDeconstructedRepresentationWithAcccessor:(/*^block*/id)arg1 ;
-(id)pbColor;
-(double)blue;
-(id)legibleColor;
-(unsigned long long)hash;
-(double)green;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

