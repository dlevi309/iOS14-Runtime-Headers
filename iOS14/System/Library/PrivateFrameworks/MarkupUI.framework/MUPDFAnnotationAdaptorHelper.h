/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
*/


#import <MarkupUI/MarkupUI-Structs.h>
@interface MUPDFAnnotationAdaptorHelper : NSObject
+(void)addAKAnnotation:(id)arg1 toAnnotationDictionary:(CFDictionaryRef)arg2 ;
+(id)newAKAnnotationFromCGPDFAnnotation:(CGPDFAnnotationRef)arg1 ;
+(id)getTextStringForKey:(const char*)arg1 fromAnnotationDictionary:(CGPDFDictionaryRef)arg2 ;
+(id)getRGBColorForKey:(const char*)arg1 fromAnnotationDictionary:(CGPDFDictionaryRef)arg2 ;
+(void)addBoundsOfAnnotation:(id)arg1 forPage:(CGPDFPageRef)arg2 toDictionary:(id)arg3 ;
+(void)addModificationDateOfAnnotation:(id)arg1 toDictionary:(id)arg2 ;
+(void)addFlagsOfAnnotation:(id)arg1 toDictionary:(id)arg2 ;
+(void)addRGBColor:(id)arg1 forKey:(id)arg2 toDictionary:(id)arg3 ;
+(void)addTextLabelOfAnnotation:(id)arg1 toDictionary:(id)arg2 ;
+(void)migrateAKStrokedAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(CGPDFDictionaryRef)arg2 ofPDFPage:(CGPDFPageRef)arg3 ;
+(void)migrateAKTextAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(CGPDFDictionaryRef)arg2 ofPDFPage:(CGPDFPageRef)arg3 ;
+(void)addContentsStringOfAnnotation:(id)arg1 toDictionary:(id)arg2 ;
+(void)addBorderStyleOfAnnotation:(id)arg1 toDictionary:(id)arg2 ;
+(void)addAppearanceStreamOfAnnotation:(id)arg1 forPage:(CGPDFPageRef)arg2 toDictionary:(id)arg3 ;
+(id)_colorFromPDFArray:(CGPDFArrayRef)arg1 ;
+(void)readDefaultAppearanceStringFromPDFDictionary:(CGPDFDictionaryRef)arg1 ofPage:(CGPDFPageRef)arg2 toDictionary:(id)arg3 ;
+(void)readQuaddingFromPDFDictionary:(CGPDFDictionaryRef)arg1 toDictionary:(id)arg2 ;
+(id)_getFontFromAppearanceString:(CGPDFStringRef)arg1 ofPDFPage:(CGPDFPageRef)arg2 ;
+(id)_getColorFromAppearanceString:(CGPDFStringRef)arg1 ;
+(void)addString:(id)arg1 toDictionary:(id)arg2 forKey:(id)arg3 ;
+(BOOL)_shouldUseAKAnnotation:(id)arg1 toRepresentCGPDFAnnotation:(CGPDFAnnotationRef)arg2 ;
+(id)_tokenizeAppearanceString:(id)arg1 ;
+(double)_pointSizeFromAppearanceTokens:(id)arg1 ;
+(id)_fontNameFromAppearanceTokens:(id)arg1 ;
+(id)_colorFromAppearanceTokens:(id)arg1 ;
+(void)migrateAppearanceStreamFromCGPDFAnnotationDict:(CGPDFDictionaryRef)arg1 toAKAnnotation:(id)arg2 compensatingForPageRotation:(unsigned long long)arg3 ;
+(void)migrateAKFilledAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(CGPDFDictionaryRef)arg2 ofPDFPage:(CGPDFPageRef)arg3 ;
+(void)migrateAKRectangularShapeAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(CGPDFDictionaryRef)arg2 ofPDFPage:(CGPDFPageRef)arg3 ;
+(id)getFullFieldNameFromAnnotationDictionary:(CGPDFDictionaryRef)arg1 ;
+(void)addTextOfAnnotation:(id)arg1 toDictionary:(id)arg2 forKey:(id)arg3 canUsePlaceholder:(BOOL)arg4 ;
+(void)addDefaultAppearanceStreamOfAnnotation:(id)arg1 toDictionary:(id)arg2 ;
+(void)addQuaddingOfAnnotation:(id)arg1 toDictionary:(id)arg2 ;
@end

