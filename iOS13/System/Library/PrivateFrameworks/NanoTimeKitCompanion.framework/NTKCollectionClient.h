/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKCollectionClient <NSObject>
@required
-(void)loadFullCollectionWithOrderedUUIDs:(id)arg1 selectedUUID:(id)arg2 facesByUUID:(id)arg3 seqId:(id)arg4 completion:(/*^block*/id)arg5;
-(void)updateSelectedFaceUUID:(id)arg1 seqId:(id)arg2;
-(void)updateOrderedFaceUUIDs:(id)arg1 seqId:(id)arg2;
-(void)updateFaceForUUID:(id)arg1 withConfiguration:(id)arg2 seqId:(id)arg3;
-(void)updateFaceForUUID:(id)arg1 withResourceDirectory:(id)arg2 seqId:(id)arg3 completion:(/*^block*/id)arg4;
-(void)addFace:(id)arg1 forUUID:(id)arg2 seqId:(id)arg3;
-(void)removeFaceForUUID:(id)arg1 seqId:(id)arg2 completion:(/*^block*/id)arg3;
-(void)upgradeFace:(id)arg1 forUUID:(id)arg2 seqID:(id)arg3;
-(void)resetClientCollection;
-(void)flushCompleteForIdentifier:(id)arg1;

@end

