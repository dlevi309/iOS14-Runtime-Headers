/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentInsertionLayoutProvider.h>
@class SXColumnLayout;


@protocol SXComponentInsertionLayoutProvider <NSObject>
@property (nonatomic,readonly) CGSize viewportSize; 
@property (nonatomic,readonly) CGSize documentSize; 
@property (nonatomic,readonly) SXColumnLayout * columnLayout; 
@required
-(CGSize)viewportSize;
-(CGSize)documentSize;
-(SXColumnLayout *)columnLayout;
-(CGRect*)frameForComponent:(id)arg1;
-(id)suggestedMarginForMarker:(id)arg1;
-(id)unitConverterForMarker:(id)arg1;

@end


@protocol SXDOMObjectProviding, SXUnitConverterFactory;
@class SXColumnLayout, SXLayoutBlueprint, NSString;

@interface SXComponentInsertionLayoutProvider : NSObject <SXComponentInsertionLayoutProvider> {

	SXLayoutBlueprint* _layoutBlueprint;
	id<SXDOMObjectProviding> _DOMObjectProvider;
	id<SXUnitConverterFactory> _unitConverterFactory;

}

@property (nonatomic,readonly) SXLayoutBlueprint * layoutBlueprint;                          //@synthesize layoutBlueprint=_layoutBlueprint - In the implementation block
@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;                   //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) id<SXUnitConverterFactory> unitConverterFactory;              //@synthesize unitConverterFactory=_unitConverterFactory - In the implementation block
@property (nonatomic,readonly) CGSize viewportSize; 
@property (nonatomic,readonly) CGSize documentSize; 
@property (nonatomic,readonly) SXColumnLayout * columnLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id<SXUnitConverterFactory>)unitConverterFactory;
-(CGSize)viewportSize;
-(CGSize)documentSize;
-(SXLayoutBlueprint *)layoutBlueprint;
-(SXColumnLayout *)columnLayout;
-(id)layoutBlueprintForMarker:(id)arg1 ;
-(CGRect)frameForComponent:(id)arg1 ;
-(id)suggestedMarginForMarker:(id)arg1 ;
-(id)unitConverterForMarker:(id)arg1 ;
-(id)initWithBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 unitConverterFactory:(id)arg3 ;
@end
