/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class LPURLFetcher, LPLinkMetadata;

@interface LPRedditMetadataProviderSpecialization : LPMetadataProviderSpecialization {

	BOOL _cancelled;
	LPURLFetcher* _fetcher;
	LPLinkMetadata* _metadata;
	/*^block*/id _completionHandler;

}
+(BOOL)generateSpecializedMetadataForCompleteMetadata:(id)arg1 withContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(unsigned long long)specialization;
@end

