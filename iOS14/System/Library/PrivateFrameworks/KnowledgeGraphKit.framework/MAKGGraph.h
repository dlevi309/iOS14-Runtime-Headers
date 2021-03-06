/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/MABaseGraph.h>

@class KGGraph, NSMutableDictionary;

@interface MAKGGraph : MABaseGraph {

	KGGraph* _graph;
	NSMutableDictionary* _labelByDomain;
	NSMutableDictionary* _domainByLabel;

}

@property (nonatomic,readonly) KGGraph * graph;              //@synthesize graph=_graph - In the implementation block
+(void)enableKGDB;
+(id)persistentStoreFileExtension;
+(BOOL)hasMarker:(id)arg1 ;
+(void)disableKGDB;
+(void)deleteMarker:(id)arg1 ;
+(Class)persistentStoreClass;
+(BOOL)setMarkerAtURL:(id)arg1 ;
+(BOOL)destroyPersistentStoreAtURL:(id)arg1 error:(id*)arg2 ;
+(id)persistentStoreURLWithPath:(id)arg1 andName:(id)arg2 ;
+(BOOL)copyPersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)migratePersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id)allEdges;
-(KGGraph *)graph;
-(id)edgesForDomain:(unsigned short)arg1 ;
-(void)removeModelPropertyForKey:(id)arg1 forNodeWithIdentifier:(unsigned)arg2 ;
-(unsigned long long)nodesCountForDomain:(unsigned short)arg1 ;
-(id)initWithSpecification:(id)arg1 ;
-(id)initWithGraphJSONURL:(id)arg1 ;
-(void)persistModelProperties:(id)arg1 forEdgeWithIdentifier:(unsigned)arg2 clobberExisting:(BOOL)arg3 ;
-(unsigned long long)numberOfEdgesMatchingFilter:(id)arg1 ;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)anyNodeForLabel:(id)arg1 ;
-(void)removeEdges:(id)arg1 ;
-(unsigned long long)nodesCount;
-(id)edgeForIdentifier:(unsigned)arg1 ;
-(void)leaveBatch;
-(void)enumerateNodesRelatedToNodeWithIdentifier:(unsigned)arg1 withRelation:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateNodesWithIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)writeUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(id)nodesForDomain:(unsigned short)arg1 properties:(id)arg2 ;
-(void)savePersistentStoreWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)savePersistentStore;
-(id)addNodeWithLabel:(id)arg1 ;
-(unsigned long long)edgesCountForDomain:(unsigned short)arg1 ;
-(void)removeModelPropertiesForEdgeWithIdentifier:(unsigned)arg1 ;
-(id)nodesForLabel:(id)arg1 ;
-(void)persistWeight:(float)arg1 forEdgeWithIdentifier:(unsigned)arg2 ;
-(void)removeModelPropertiesForNodeWithIdentifier:(unsigned)arg1 ;
-(id)nodeFromFetchedRowWithIdentifier:(int)arg1 domain:(short)arg2 label:(id)arg3 weight:(float)arg4 ;
-(void)removeNode:(id)arg1 ;
-(void)persistModelProperties:(id)arg1 forNodeWithIdentifier:(unsigned)arg2 clobberExisting:(BOOL)arg3 ;
-(BOOL)edgesStoreWeakReferencesToNodes;
-(void)enumerateNodesMatchingFilter:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 ;
-(void)enumerateEdgesInDomain:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg1 ;
-(void)enumerateEdgesMatchingFilter:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeNodeEdges:(id)arg1 ;
-(BOOL)copyPersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(void)removeEdge:(id)arg1 ;
-(void)enumerateEdgesWithIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)edgesForDomains:(id)arg1 ;
-(unsigned long long)edgesCount;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg1 ;
-(id)edgesDomains;
-(id)addNodeFromBase:(id)arg1 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)nodesDomains;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)initWithSpecification:(id)arg1 persistenceStoreURL:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)hasMarker;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)nodesLabels;
-(id)initWithSpecification:(id)arg1 dataURL:(id)arg2 ;
-(id)nodesForDomain:(unsigned short)arg1 ;
-(void)enterBatch;
-(id)nodeIdentifiersRelatedToSourceNodeIdentifiers:(id)arg1 relation:(id)arg2 ;
-(id)description;
-(void)invalidateMemoryCaches;
-(id)allNodes;
-(id)addUniqueNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(BOOL*)arg5 ;
-(void)loadDomains:(id)arg1 ;
-(Class)nodeClass;
-(void)persistModelProperty:(id)arg1 forKey:(id)arg2 forNodeWithIdentifier:(unsigned)arg3 ;
-(void)deleteMarker;
-(id)edgesMatchingFilter:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(BOOL)migratePersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(void)closePersistentStore;
-(id)anyNodeForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)edgesForIdentifiers:(id)arg1 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(unsigned long long)countOfNodesRelatedToNodesWithIdentifiers:(id)arg1 relation:(id)arg2 ;
-(void)removeModelPropertyForKey:(id)arg1 forEdgeWithIdentifier:(unsigned)arg2 ;
-(void)waitUntilQuiescentUsingBlock:(/*^block*/id)arg1 ;
-(void)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 saveToDatabase:(BOOL)arg4 createdNodes:(out id*)arg5 createdEdges:(out id*)arg6 ;
-(void)persistModelProperty:(id)arg1 forKey:(id)arg2 forEdgeWithIdentifier:(unsigned)arg3 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 ;
-(id)databaseURL;
-(void)readUsingBlock:(/*^block*/id)arg1 ;
-(id)nodesForIdentifiers:(id)arg1 ;
-(id)addUniquelyIdentifiedNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(BOOL*)arg5 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 ;
-(void)setMarker;
-(id)anyNodeMatchingFilter:(id)arg1 ;
-(BOOL)compareWithPersistedState;
-(id)nodesMatchingFilter:(id)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(id)identifier;
-(id)edgeFromFetchedRowWithIdentifier:(int)arg1 domain:(short)arg2 label:(id)arg3 weight:(float)arg4 sourceNodeIdentifier:(int)arg5 targetNodeIdentifier:(int)arg6 ;
-(unsigned long long)numberOfNodesMatchingFilter:(id)arg1 ;
-(id)nodeForIdentifier:(unsigned)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)initWithGraphMLURL:(id)arg1 ;
-(void)removeNodes:(id)arg1 ;
-(void)enumerateNodesInDomain:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)persistWeight:(float)arg1 forNodeWithIdentifier:(unsigned)arg2 ;
-(id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(unsigned long long)version;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(void)unloadDomains:(id)arg1 ;
-(BOOL)hasPendingRead;
-(id)orphanNodes;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)nodesForDomains:(id)arg1 ;
-(void)_loadWithGraphDictionary:(id)arg1 ;
-(void)unloadEdge:(id)arg1 ;
-(unsigned long long)memoryFootprint:(id)arg1 ;
-(id)edgesLabels;
-(BOOL)hasPendingWrite;
-(id)abstractEdges;
-(id)labelsForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)labelAndDomainFromLabels:(id)arg1 outLabel:(id*)arg2 outDomain:(unsigned short*)arg3 ;
-(void)populateEntityDescription:(id)arg1 fromGraphSpecification:(id)arg2 ;
-(id)maNodeFromKGNode:(id)arg1 ;
-(id)maNodesFromKGNodeCollection:(id)arg1 ;
-(id)maEdgeFromKGEdge:(id)arg1 ;
-(id)maEdgesFromKGEdgeCollection:(id)arg1 ;
-(id)_addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(id)_nodeIdentifiersWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)_addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(id)_edgeIdentifiersForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)_anyEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(id)edgesOfType:(unsigned long long)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 ;
-(id)edgesWithLabel:(id)arg1 inDomain:(unsigned short)arg2 onNode:(id)arg3 edgeDirection:(unsigned long long)arg4 ;
-(unsigned long long)countOfEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 startNode:(id)arg5 ;
-(void)_instantiateGraphWithStoreAtURL:(id)arg1 ;
@end

