/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSImpression.h>

@protocol IKJSImpression <JSExport>
@end

#import <libobjc.A.dylib/_IKJSImpressionProxy.h>
#import <libobjc.A.dylib/_IKJSImpression.h>

@class NSString, NSArray, NSMutableArray;

@interface IKJSImpression : IKJSObject <NSObject, IKJSImpression, _IKJSImpressionProxy, _IKJSImpression> {

	IKJSImpression* _parentImpression;
	NSString* _metricsTag;
	NSString* _metricsData;
	NSMutableArray* _mutableTimestamps;
	NSMutableArray* _mutableChildren;
	long long _indexInParent;

}

@property (nonatomic,copy) NSString * metricsTag;                                   //@synthesize metricsTag=_metricsTag - In the implementation block
@property (nonatomic,copy) NSString * metricsData;                                  //@synthesize metricsData=_metricsData - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableTimestamps;                    //@synthesize mutableTimestamps=_mutableTimestamps - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableChildren;                      //@synthesize mutableChildren=_mutableChildren - In the implementation block
@property (assign,nonatomic,__weak) IKJSImpression * parentImpression;              //@synthesize parentImpression=_parentImpression - In the implementation block
@property (assign,nonatomic) long long indexInParent;                               //@synthesize indexInParent=_indexInParent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * data; 
@property (nonatomic,readonly) NSArray * timestamps; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) id parent; 
@property (nonatomic,readonly) long long index; 
@property (nonatomic,readonly) NSString * impressionQueueTag; 
+(id)impressionsMapForViewElements:(id)arg1 appContext:(id)arg2 timestamp:(long long)arg3 existingImpressionsMap:(id)arg4 ;
+(id)impressionsMapForViewElements:(id)arg1 appContext:(id)arg2 timestamp:(long long)arg3 ;
-(NSArray *)children;
-(long long)index;
-(id)parent;
-(NSArray *)timestamps;
-(void)addChild:(id)arg1 ;
-(NSString *)description;
-(NSString *)data;
-(NSMutableArray *)mutableChildren;
-(void)setMutableChildren:(NSMutableArray *)arg1 ;
-(void)addTimestamp:(long long)arg1 ;
-(IKJSImpression *)parentImpression;
-(void)linkReferences;
-(NSString *)impressionQueueTag;
-(id)initWithAppContext:(id)arg1 data:(id)arg2 index:(unsigned long long)arg3 queueTag:(id)arg4 ;
-(NSMutableArray *)mutableTimestamps;
-(NSString *)metricsTag;
-(NSString *)metricsData;
-(long long)indexInParent;
-(void)setMutableTimestamps:(NSMutableArray *)arg1 ;
-(void)setParentImpression:(IKJSImpression *)arg1 ;
-(id)asPrivateIKJSImpression;
-(void)setMetricsTag:(NSString *)arg1 ;
-(void)setMetricsData:(NSString *)arg1 ;
-(void)setIndexInParent:(long long)arg1 ;
@end

