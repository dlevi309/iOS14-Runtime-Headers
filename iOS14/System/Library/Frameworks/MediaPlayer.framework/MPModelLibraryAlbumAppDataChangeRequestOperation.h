/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryAlbumAppDataChangeRequest;

@interface MPModelLibraryAlbumAppDataChangeRequestOperation : MPAsyncOperation {

	/*^block*/id _responseHandler;
	MPModelLibraryAlbumAppDataChangeRequest* _request;

}

@property (nonatomic,copy) id responseHandler;                                             //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,copy) MPModelLibraryAlbumAppDataChangeRequest * request;              //@synthesize request=_request - In the implementation block
-(void)execute;
-(void)setRequest:(MPModelLibraryAlbumAppDataChangeRequest *)arg1 ;
-(id)responseHandler;
-(MPModelLibraryAlbumAppDataChangeRequest *)request;
-(void)setResponseHandler:(id)arg1 ;
@end

