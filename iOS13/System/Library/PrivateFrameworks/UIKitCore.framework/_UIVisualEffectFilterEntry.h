/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVisualEffectDiffable.h>

@class CAFilter, NSString, NSDictionary;

@interface _UIVisualEffectFilterEntry : NSObject <_UIVisualEffectDiffable> {

	CAFilter* _filter;
	NSString* _filterType;
	NSDictionary* _configurationValues;
	NSDictionary* _requestedValues;
	NSDictionary* _identityValues;
	double _requestedScaleHint;
	double _identityScaleHint;
	NSString* _filterName;

}

@property (nonatomic,copy) NSString * filterType;                           //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,copy) NSDictionary * configurationValues;              //@synthesize configurationValues=_configurationValues - In the implementation block
@property (nonatomic,copy) NSDictionary * requestedValues;                  //@synthesize requestedValues=_requestedValues - In the implementation block
@property (nonatomic,copy) NSDictionary * identityValues;                   //@synthesize identityValues=_identityValues - In the implementation block
@property (assign,nonatomic) double requestedScaleHint;                     //@synthesize requestedScaleHint=_requestedScaleHint - In the implementation block
@property (assign,nonatomic) double identityScaleHint;                      //@synthesize identityScaleHint=_identityScaleHint - In the implementation block
@property (nonatomic,readonly) CAFilter * filter; 
@property (nonatomic,copy,readonly) NSString * filterName;                  //@synthesize filterName=_filterName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CAFilter *)filter;
-(NSString *)filterType;
-(void)setFilterType:(NSString *)arg1 ;
-(id)initWithFilterType:(id)arg1 configurationValues:(id)arg2 requestedValues:(id)arg3 identityValues:(id)arg4 ;
-(void)setIdentityScaleHint:(double)arg1 ;
-(void)setRequestedScaleHint:(double)arg1 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(void)convertToIdentity;
-(BOOL)isSameTypeOfEffect:(id)arg1 ;
-(NSString *)filterName;
-(id)valueAsRequested:(BOOL)arg1 ;
-(id)copyForTransitionToEffect:(id)arg1 ;
-(id)copyForTransitionOut;
-(double)scaleHintAsRequested:(BOOL)arg1 ;
-(void)forceUniqueName;
-(NSDictionary *)configurationValues;
-(void)setConfigurationValues:(NSDictionary *)arg1 ;
-(NSDictionary *)requestedValues;
-(void)setRequestedValues:(NSDictionary *)arg1 ;
-(NSDictionary *)identityValues;
-(void)setIdentityValues:(NSDictionary *)arg1 ;
-(double)requestedScaleHint;
-(double)identityScaleHint;
@end
