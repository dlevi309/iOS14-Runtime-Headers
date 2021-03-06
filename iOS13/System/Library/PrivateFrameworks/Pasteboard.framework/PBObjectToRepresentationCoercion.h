/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
*/


@class NSMutableDictionary, NSMutableOrderedSet;

@interface PBObjectToRepresentationCoercion : NSObject {

	Class _theClass;
	NSMutableDictionary* _coercionBlockByType;
	NSMutableOrderedSet* _typeOrder;

}

@property (nonatomic,retain) Class theClass;                                         //@synthesize theClass=_theClass - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * coercionBlockByType;              //@synthesize coercionBlockByType=_coercionBlockByType - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * typeOrder;                        //@synthesize typeOrder=_typeOrder - In the implementation block
-(id)initWithClass:(Class)arg1 ;
-(void)addCoercionToType:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)availableExportTypes;
-(BOOL)canCoerceToType:(id)arg1 ;
-(void)createRepresentationOfType:(id)arg1 fromObject:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(Class)theClass;
-(void)setTheClass:(Class)arg1 ;
-(NSMutableDictionary *)coercionBlockByType;
-(void)setCoercionBlockByType:(NSMutableDictionary *)arg1 ;
-(NSMutableOrderedSet *)typeOrder;
-(void)setTypeOrder:(NSMutableOrderedSet *)arg1 ;
@end

