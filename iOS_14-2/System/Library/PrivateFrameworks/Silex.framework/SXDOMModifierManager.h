/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDOMModifierManager.h>

@protocol SXDOMModifierManager <NSObject>
@required
-(void)addModifier:(id)arg1;

@end

#import <libobjc.A.dylib/SXLayoutProcessor.h>

@protocol SXDOMFactory, SXDOMModificationContextFactory, SXDOMCacheKeyFactory;
@class NSMutableArray, NSCache, NSString;

@interface SXDOMModifierManager : NSObject <SXDOMModifierManager, SXLayoutProcessor> {

	id<SXDOMFactory> _DOMFactory;
	id<SXDOMModificationContextFactory> _contextFactory;
	id<SXDOMCacheKeyFactory> _cacheKeyFactory;
	NSMutableArray* _modifiers;
	NSCache* _cache;

}

@property (nonatomic,readonly) id<SXDOMFactory> DOMFactory;                                     //@synthesize DOMFactory=_DOMFactory - In the implementation block
@property (nonatomic,readonly) id<SXDOMModificationContextFactory> contextFactory;              //@synthesize contextFactory=_contextFactory - In the implementation block
@property (nonatomic,readonly) id<SXDOMCacheKeyFactory> cacheKeyFactory;                        //@synthesize cacheKeyFactory=_cacheKeyFactory - In the implementation block
@property (nonatomic,readonly) NSMutableArray * modifiers;                                      //@synthesize modifiers=_modifiers - In the implementation block
@property (nonatomic,readonly) NSCache * cache;                                                 //@synthesize cache=_cache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSCache *)cache;
-(id)initWithDOMFactory:(id)arg1 contextFactory:(id)arg2 cacheKeyFactory:(id)arg3 ;
-(void)processLayoutTask:(id)arg1 layoutBlueprint:(id)arg2 DOMObjectProvider:(id)arg3 ;
-(id<SXDOMCacheKeyFactory>)cacheKeyFactory;
-(id<SXDOMFactory>)DOMFactory;
-(NSMutableArray *)modifiers;
-(void)addModifier:(id)arg1 ;
-(id<SXDOMModificationContextFactory>)contextFactory;
@end
