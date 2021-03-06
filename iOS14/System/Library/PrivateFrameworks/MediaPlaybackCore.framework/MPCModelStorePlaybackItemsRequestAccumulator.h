/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class MPCModelStorePlaybackItemsRequest, MPServerObjectDatabase, NSString, MPPropertySet, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, MPMutableSectionedCollection, NSDictionary, MPSectionedCollection;

@interface MPCModelStorePlaybackItemsRequestAccumulator : NSObject {

	MPCModelStorePlaybackItemsRequest* _request;
	BOOL _requestUsesSectionedModelObjects;
	MPServerObjectDatabase* _sod;
	NSString* _personID;
	MPPropertySet* _requestPropertySet;
	NSMutableArray* _importResults;
	BOOL _allowsExplicitContent;
	long long _defaultLibraryPersonalizationStyle;
	long long _unknownEndpointLibraryPersonalizationStyle;
	NSMutableDictionary* _equivalencyMapping;
	NSMutableOrderedSet* _pendingStoreIDs;
	NSMutableSet* _failedStoreIDs;
	long long _storePersonalizationStyle;
	MPMutableSectionedCollection* _progressiveContentDescriptors;

}

@property (nonatomic,copy,readonly) NSDictionary * equivalencyMapping;                                //@synthesize equivalencyMapping=_equivalencyMapping - In the implementation block
@property (nonatomic,readonly) MPSectionedCollection * unpersonalizedContentDescriptors; 
-(MPCModelStorePlaybackItemsRequestAccumulatorResult)handleResponse:(id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(MPSectionedCollection *)unpersonalizedContentDescriptors;
-(id)initWithRequest:(id)arg1 serverObjectDatabase:(id)arg2 ;
-(void)_resolveContentDescriptorsUsingServerObjectDatabase;
-(MPCModelStorePlaybackItemEligibility)_eligibilityForItem:(id)arg1 ;
-(id)_playlistEntryForObject:(id)arg1 containerUniqueID:(id)arg2 ;
-(id)_userIdentityWithRequest:(id)arg1 ;
-(void)_addEquivalencyForMetadata:(id)arg1 requestStoreIdentifier:(id)arg2 ;
-(id)_serverObjectFromPlaceholderContentDescriptor:(id)arg1 propertySet:(id)arg2 ;
-(id)_mergedObjectWithRequestedObjectIfNeeded:(id)arg1 forIndexPath:(id)arg2 ;
-(id)newStoreItemMetadataRequest;
-(NSDictionary *)equivalencyMapping;
@end

