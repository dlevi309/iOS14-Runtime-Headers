/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet, NSString, NSArray;

@interface MPUEmphasizedText : NSObject <NSCopying, NSSecureCoding> {

	NSMutableSet* _emphasisRangesSet;
	NSString* _string;

}

@property (nonatomic,copy,readonly) NSString * string; 
@property (nonatomic,copy,readonly) NSArray * emphasisRanges; 
+(BOOL)supportsSecureCoding;
+(void)_enumerateEmphasisRangesInString:(id)arg1 withEmphasisDelimiter:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(void)_enumerateEmphasisRangesInString:(id)arg1 withEmphasisSubstring:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
+(id)attributedStringWithString:(id)arg1 emphasisDelimiter:(id)arg2 regularTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4 ;
+(id)attributedStringWithString:(id)arg1 emphasisSubstring:(id)arg2 options:(unsigned long long)arg3 regularTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5 ;
+(id)emphasizedTextWithString:(id)arg1 ;
+(id)emphasizedTextUsingString:(id)arg1 emphasisDelimiter:(id)arg2 ;
+(id)emphasizedTextUsingString:(id)arg1 emphasisSubstring:(id)arg2 options:(unsigned long long)arg3 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithString:(id)arg1 emphasisRanges:(id)arg2 ;
-(NSArray *)emphasisRanges;
-(void)enumerateEmphasisRangesUsingBlock:(/*^block*/id)arg1 ;
-(id)newAttributedStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2 ;
-(id)newAttributedStringWithTextAttributes:(id)arg1 ;
@end

