/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKViewElement.h>

@protocol IKDataSourceElementImplementing;
@class NSDictionary, NSArray, IKChangeSet;

@interface IKDataSourceElement : IKViewElement {

	BOOL _areItemsBound;
	struct {
		BOOL hasMasterPrototypes;
		BOOL hasProxiedItemElements;
		BOOL hasMasterPrototypeForItemAtIndex;
		BOOL hasResetImplicitUpdates;
		BOOL hasProxyElementForLoadedChildElement;
		BOOL hasCanProxyUnloadedChildElement;
	}  _implFlags;
	NSDictionary* _indexTitles;
	NSArray* _autoHighlightedChildElements;
	long long _autoHighlightIndex;
	id<IKDataSourceElementImplementing> _impl;

}

@property (nonatomic,copy) NSArray * autoHighlightedChildElements;                    //@synthesize autoHighlightedChildElements=_autoHighlightedChildElements - In the implementation block
@property (assign,nonatomic) long long autoHighlightIndex;                            //@synthesize autoHighlightIndex=_autoHighlightIndex - In the implementation block
@property (nonatomic,copy) NSDictionary * indexTitles;                                //@synthesize indexTitles=_indexTitles - In the implementation block
@property (nonatomic,readonly) id<IKDataSourceElementImplementing> impl;              //@synthesize impl=_impl - In the implementation block
@property (nonatomic,readonly) NSArray * masterPrototypes; 
@property (nonatomic,copy,readonly) NSArray * proxiedItemElements; 
@property (getter=areItemsBound,nonatomic,readonly) BOOL itemsBound; 
@property (nonatomic,readonly) NSArray * prototypes; 
@property (nonatomic,readonly) IKChangeSet * itemsChangeSet; 
+(unsigned long long)updateTypeForChangeInAttribute:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
-(NSDictionary *)indexTitles;
-(long long)numberOfItems;
-(void)setIndexTitles:(NSDictionary *)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(NSArray *)prototypes;
-(id<IKDataSourceElementImplementing>)impl;
-(id)elementForItemAtIndex:(long long)arg1 ;
-(long long)indexOfItemForElement:(id)arg1 ;
-(void)loadIndex:(long long)arg1 ;
-(void)unloadIndex:(long long)arg1 ;
-(id)firstItemElement;
-(id)lastItemElement;
-(IKChangeSet *)itemsChangeSet;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)configureUpdatesWithElement:(id)arg1 ;
-(void)resetProperty:(unsigned long long)arg1 ;
-(void)appDocumentDidMarkStylesDirty;
-(void)resetImplicitUpdates;
-(NSArray *)masterPrototypes;
-(NSArray *)proxiedItemElements;
-(id)masterPrototypeForItemAtIndex:(unsigned long long)arg1 ;
-(id)proxyElementForLoadedChildElement:(id)arg1 ;
-(BOOL)canProxyUnloadedChildElement:(id)arg1 ;
-(id)_parsedIndexTitlesFromString:(id)arg1 ;
-(BOOL)areItemsBound;
-(NSArray *)autoHighlightedChildElements;
-(void)setAutoHighlightedChildElements:(NSArray *)arg1 ;
-(void)setAutoHighlightIndex:(long long)arg1 ;
-(id)prototypeForItemAtIndex:(long long)arg1 ;
-(void)resetUpdates;
-(long long)autoHighlightIndex;
-(void)enumerateItemElementsUsingBlock:(/*^block*/id)arg1 ;
@end

