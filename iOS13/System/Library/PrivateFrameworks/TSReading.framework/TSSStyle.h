/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <TSReading/TSSPropertyValueValidator.h>
#import <TSReading/TSSStyleObject.h>
#import <TSReading/TSSThemeAsset.h>
#import <TSReading/TSSPropertySource.h>
#import <TSReading/TSSStyleClient.h>
#import <TSReading/TSKModel.h>
#import <TSReading/TSKTransformableObject.h>

@class TSSPropertyMap, NSString, TSSStylesheet, NSSet;

@interface TSSStyle : TSPObject <NSCopying, TSSPropertyValueValidator, TSSStyleObject, TSSThemeAsset, TSSPropertySource, TSSStyleClient, TSKModel, TSKTransformableObject> {

	TSSPropertyMap* mOverridePropertyMap;
	NSString* mName;
	NSString* mStyleIdentifier;
	TSSStyle* mParent;
	BOOL mIsVariation;
	TSSStylesheet* mStylesheet;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) NSString * styleIdentifier; 
@property (nonatomic,readonly) TSSStyle * parent; 
@property (nonatomic,readonly) TSSStyle * rootAncestor; 
@property (nonatomic,readonly) TSSStyle * baseStyleForVariation; 
@property (nonatomic,readonly) TSSStyle * firstIdentifiedAncestor; 
@property (nonatomic,readonly) TSSStyle * rootIdentifiedAncestor; 
@property (nonatomic,readonly) BOOL isVariation; 
@property (nonatomic,readonly) BOOL isNamed; 
@property (nonatomic,readonly) BOOL isIdentified; 
@property (nonatomic,readonly) TSSStylesheet * stylesheet; 
@property (nonatomic,readonly) TSSPropertyMap * overridePropertyMap; 
@property (nonatomic,readonly) NSSet * children; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)description;
+(id)properties;
+(id)defaultStyleWithContext:(id)arg1 ;
+(id)defaultValueForProperty:(int)arg1 ;
+(int)defaultIntValueForProperty:(int)arg1 ;
+(float)defaultFloatValueForProperty:(int)arg1 ;
+(double)defaultDoubleValueForProperty:(int)arg1 ;
+(id)boxedDefaultValueForProperty:(int)arg1 ;
+(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2 ;
+(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4 ;
+(BOOL)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2 ;
+(BOOL)validateFloatValue:(float*)arg1 forProperty:(int)arg2 ;
+(BOOL)validateDoubleValue:(double*)arg1 forProperty:(int)arg2 ;
+(BOOL)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3 ;
+(double)fontSizeForFontSize:(double)arg1 scalingFactor:(double)arg2 ;
+(id)defaultPropertyMap;
+(id)propertiesAllowingNSNull;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSSStyle *)parent;
-(void)setParent:(TSSStyle *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)removeAllValues;
-(NSSet *)children;
-(id)valueForProperty:(int)arg1 ;
-(void)setValue:(id)arg1 forProperty:(int)arg2 ;
-(id)objectForProperty:(int)arg1 ;
-(id)valuesForProperties:(id)arg1 ;
-(TSSStylesheet *)stylesheet;
-(void)setStylesheet:(TSSStylesheet *)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)setIntValue:(int)arg1 forProperty:(int)arg2 ;
-(float)floatValueForProperty:(int)arg1 ;
-(void)setFloatValue:(float)arg1 forProperty:(int)arg2 ;
-(id)propertyMap;
-(BOOL)containsProperty:(int)arg1 ;
-(void)setDoubleValue:(double)arg1 forProperty:(int)arg2 ;
-(id)boxedObjectForProperty:(int)arg1 ;
-(void)removeValueForProperty:(int)arg1 ;
-(int)intValueForProperty:(int)arg1 ;
-(double)doubleValueForProperty:(int)arg1 ;
-(double)CGFloatValueForProperty:(int)arg1 ;
-(void)setCGFloatValue:(double)arg1 forProperty:(int)arg2 ;
-(BOOL)definesProperty:(int)arg1 ;
-(TSSStyle *)rootAncestor;
-(NSString *)styleIdentifier;
-(id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 context:(id)arg2 ;
-(id)boxedValueForProperty:(int)arg1 ;
-(id)copyPropertyMap;
-(BOOL)overridesProperty:(int)arg1 ;
-(id)overrideValueForProperty:(int)arg1 ;
-(int)overrideIntValueForProperty:(int)arg1 ;
-(float)overrideFloatValueForProperty:(int)arg1 ;
-(double)overrideDoubleValueForProperty:(int)arg1 ;
-(id)propertyMapIgnoringStyle:(id)arg1 ;
-(BOOL)isVariation;
-(BOOL)hasEqualValues:(id)arg1 forProperties:(id)arg2 ;
-(BOOL)p_hasEqualValuesTo:(id)arg1 forProperty:(int)arg2 ;
-(BOOL)isIdentified;
-(BOOL)isDescendentOf:(id)arg1 ;
-(BOOL)isAncestorOf:(id)arg1 ;
-(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2 ;
-(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4 ;
-(BOOL)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2 ;
-(BOOL)validateFloatValue:(float*)arg1 forProperty:(int)arg2 ;
-(BOOL)validateDoubleValue:(double*)arg1 forProperty:(int)arg2 ;
-(BOOL)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3 ;
-(BOOL)transformsFontSizes;
-(BOOL)isThemeEquivalent:(id)arg1 ;
-(SEL)mapThemeAssetSelector;
-(id)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
-(void)setStyleIdentifier:(NSString *)arg1 ;
-(id)copyFlattenedWithContext:(id)arg1 ;
-(void)setBoxedValue:(id)arg1 forProperty:(int)arg2 ;
-(void)setValuesForProperties:(id)arg1 ;
-(BOOL)isNamed;
-(BOOL)overridesAnyProperty;
-(id)overriddenProperties;
-(unsigned long long)overrideCount;
-(id)boxedOverrideValueForProperty:(int)arg1 ;
-(double)overrideCGFloatValueForProperty:(int)arg1 ;
-(id)fullPropertyMap;
-(id)overridePropertyMapWithPropertyMap:(id)arg1 overridePropertyMap:(id)arg2 collapseSourceOverrides:(BOOL)arg3 ;
-(id)newOverridePropertyMapWithPropertyMap:(id)arg1 ;
-(BOOL)hasEqualPropertyValues:(id)arg1 ;
-(BOOL)hasEqualValuesToPropertyMap:(id)arg1 forProperties:(id)arg2 ;
-(TSSPropertyMap *)overridePropertyMap;
-(void)setOverridePropertyMap:(TSSPropertyMap *)arg1 ;
-(BOOL)overridePropertyMapIsEqualTo:(id)arg1 ;
-(TSSStyle *)baseStyleForVariation;
-(TSSStyle *)firstIdentifiedAncestor;
-(TSSStyle *)rootIdentifiedAncestor;
-(BOOL)isChildOf:(id)arg1 ;
-(BOOL)isParentOf:(id)arg1 ;
-(id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(CGAffineTransform)arg3 ;
-(void)constrainShadowForSwatchGeneration;
-(void)constrainStrokeForSwatchGeneration;
-(void)fadeReflectionForSwatchGeneration;
-(id)constrainShapeStyleForContext:(id)arg1 ;
@end

