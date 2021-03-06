/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXFontFace.h>

@protocol SXFontAttributes;
@class NSString;

@interface SXFontFace : NSObject <SXFontFace> {

	NSString* _fontName;
	id<SXFontAttributes> _fontAttributes;

}

@property (nonatomic,readonly) NSString * fontName;                              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) id<SXFontAttributes> fontAttributes;              //@synthesize fontAttributes=_fontAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)fontName;
-(id<SXFontAttributes>)fontAttributes;
-(id)initWithFontName:(id)arg1 fontAttributes:(id)arg2 ;
@end

