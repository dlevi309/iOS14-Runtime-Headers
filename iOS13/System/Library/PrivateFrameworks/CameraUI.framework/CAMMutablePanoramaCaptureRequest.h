/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMPanoramaCaptureRequest.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestPersistence.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestLocation.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestPower.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestOrigin.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestEncodingBehavior.h>

@class NSString, NSURL, CLLocation, CLHeading;

@interface CAMMutablePanoramaCaptureRequest : CAMPanoramaCaptureRequest <CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower, CAMMutableCaptureRequestOrigin, CAMMutableCaptureRequestEncodingBehavior>

@property (assign,nonatomic,__weak) id<CAMPanoramaCaptureRequestDelegate> delegate; 
@property (assign,nonatomic) long long captureOrientation; 
@property (assign,nonatomic) long long captureDevice; 
@property (assign,nonatomic) long long captureMode; 
@property (assign,nonatomic) long long pressType; 
@property (assign,nonatomic) unsigned short sessionIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long persistenceOptions; 
@property (assign,nonatomic) unsigned long long deferredPersistenceOptions; 
@property (assign,nonatomic) long long temporaryPersistenceOptions; 
@property (nonatomic,copy) NSURL * localDestinationURL; 
@property (nonatomic,copy) NSString * persistenceUUID; 
@property (assign,nonatomic) BOOL shouldExtractDiagnosticsFromMetadata; 
@property (assign,nonatomic) BOOL shouldPersistDiagnosticsToSidecar; 
@property (assign,nonatomic) BOOL shouldDelayRemotePersistence; 
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) CLHeading * heading; 
@property (assign,nonatomic) unsigned assertionIdentifier; 
@property (assign,nonatomic) long long origin; 
@property (assign,nonatomic) long long videoEncodingBehavior; 
@property (assign,nonatomic) long long photoEncodingBehavior; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setDelegate:(id<CAMPanoramaCaptureRequestDelegate>)arg1 ;
-(void)setHeading:(CLHeading *)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setOrigin:(long long)arg1 ;
-(void)setSessionIdentifier:(unsigned short)arg1 ;
-(void)setCaptureDevice:(long long)arg1 ;
-(void)setCaptureMode:(long long)arg1 ;
-(void)setPhotoEncodingBehavior:(long long)arg1 ;
-(void)setPersistenceOptions:(long long)arg1 ;
-(void)setTemporaryPersistenceOptions:(long long)arg1 ;
-(void)setCaptureOrientation:(long long)arg1 ;
-(void)setPressType:(long long)arg1 ;
-(void)setPersistenceUUID:(NSString *)arg1 ;
-(void)setShouldDelayRemotePersistence:(BOOL)arg1 ;
-(void)setDeferredPersistenceOptions:(unsigned long long)arg1 ;
-(void)setLocalDestinationURL:(NSURL *)arg1 ;
-(void)setShouldExtractDiagnosticsFromMetadata:(BOOL)arg1 ;
-(void)setShouldPersistDiagnosticsToSidecar:(BOOL)arg1 ;
-(void)setAssertionIdentifier:(unsigned)arg1 ;
@end
