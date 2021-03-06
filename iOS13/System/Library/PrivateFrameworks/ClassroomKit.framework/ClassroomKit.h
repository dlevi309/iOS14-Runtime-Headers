#import <ClassroomKit/CRKConcreteTrust.h>
#import <ClassroomKit/CRKIdentityServiceMockingRequest.h>
#import <ClassroomKit/CRKFetchStudentDaemonStateRequest.h>
#import <ClassroomKit/CRKFetchStudentDaemonStateResultObject.h>
#import <ClassroomKit/CRKStudentdXPCProfileConfigurationSource.h>
#import <ClassroomKit/CRKFetchBooksRequest.h>
#import <ClassroomKit/CRKFetchBooksResultObject.h>
#import <ClassroomKit/CRKBoundedGrowthFunction.h>
#import <ClassroomKit/CRKFailIfSimulatorTransportProvider.h>
#import <ClassroomKit/CRKConcreteClassKitFacade.h>
#import <ClassroomKit/CRKTableEntriesWithRowSpacer.h>
#import <ClassroomKit/CRKZipOperation.h>
#import <ClassroomKit/CRKFeatureDataStore_iOS.h>
#import <ClassroomKit/CRKStudentdIDSBackedFacade.h>
#import <ClassroomKit/CRKFetchDevicesRequest.h>
#import <ClassroomKit/CRKFetchDevicesResultObject.h>
#import <ClassroomKit/CRKBLBookItem.h>
#import <ClassroomKit/CRKSCBackedIPAddressProvider.h>
#import <ClassroomKit/CRKASMConcreteTrustedUser.h>
#import <ClassroomKit/CRKClassSession.h>
#import <ClassroomKit/CRKFTSEnumeration.h>
#import <ClassroomKit/CRKShareTarget.h>
#import <ClassroomKit/CRKMockSettingsUIVisibilityProvider.h>
#import <ClassroomKit/CRKSetUserPropertiesRequest.h>
#import <ClassroomKit/CRKCourseIconProvider.h>
#import <ClassroomKit/CRKPauseMediaRequest.h>
#import <ClassroomKit/CRKOrderedOneToManyKVOAccumulator.h>
#import <ClassroomKit/CRKOrderedOneToManyKVOAccumulatorResults.h>
#import <ClassroomKit/CRKIndexPair.h>
#import <ClassroomKit/CRKWaitForUnlockRequest.h>
#import <ClassroomKit/CRKDefaultsBasedInterfaceSwitchingIPAddressProvider.h>
#import <ClassroomKit/CRKSettingsUIVisibleRemoteValue.h>
#import <ClassroomKit/CRKInstructor.h>
#import <ClassroomKit/CRKCurrentPlatformProfileConfigurationSource.h>
#import <ClassroomKit/CRKSetCoursePropertiesRequest.h>
#import <ClassroomKit/CRKSettingsUIVisibilitySubscriptionRequest.h>
#import <ClassroomKit/CRKShareRequest.h>
#import <ClassroomKit/CRKUpdatePickableAirPlayRoutesRequest.h>
#import <ClassroomKit/CRKFetchApplicationsRequest.h>
#import <ClassroomKit/CRKFetchApplicationsResultObject.h>
#import <ClassroomKit/CRKASMConcreteStudentCourse.h>
#import <ClassroomKit/CRKLogEvent.h>
#import <ClassroomKit/CRKHeaderTable.h>
#import <ClassroomKit/CRKASMPersonBackedNameComponents.h>
#import <ClassroomKit/CRKSequentialOperation.h>
#import <ClassroomKit/CRKConcreteKeychain.h>
#import <ClassroomKit/CRKEDUPayload.h>
#import <ClassroomKit/CRKCourse.h>
#import <ClassroomKit/CRKRemoteEndpoint.h>
#import <ClassroomKit/CRKMobileGestalt.h>
#import <ClassroomKit/CRKLeaveControlGroupsRequest.h>
#import <ClassroomKit/CRKCurrentPlatformIPAddressProvider.h>
#import <ClassroomKit/CRKCourseInvitation.h>
#import <ClassroomKit/CRKSingleInterfaceIPAddressProvider.h>
#import <ClassroomKit/CRKFetchNumberOfDaysBeforeAutomaticRemovalRequest.h>
#import <ClassroomKit/CRKFetchNumberOfDaysBeforeAutomaticRemovalResultObject.h>
#import <ClassroomKit/CRKHostResourcesConfiguration.h>
#import <ClassroomKit/CRKChapter.h>
#import <ClassroomKit/CRKRestrictionsObserver.h>
#import <ClassroomKit/CRKASMConcreteUser.h>
#import <ClassroomKit/CRKCourseEnrollmentController.h>
#import <ClassroomKit/CRKSetMuteStateRequest.h>
#import <ClassroomKit/CRKWebClipBundleIdentifier.h>
#import <ClassroomKit/CRKASMConcreteOrganization.h>
#import <ClassroomKit/CRKFetchActiveControlGroupIdentifierRequest.h>
#import <ClassroomKit/CRKFetchActiveControlGroupIdentifierResultObject.h>
#import <ClassroomKit/CRKFileBasedKeyedDataStore.h>
#import <ClassroomKit/CRKFetchSafariBookmarksRequest.h>
#import <ClassroomKit/CRKFetchSafariBookmarksResultObject.h>
#import <ClassroomKit/CRKIdentityRefFactory.h>
#import <ClassroomKit/CRKSettingsUIVisibilityIndicatorFile.h>
#import <ClassroomKit/CRKOpenFilesRequest.h>
#import <ClassroomKit/CRKOpenFileRequestItem.h>
#import <ClassroomKit/CRKInstructorHostContext.h>
#import <ClassroomKit/CRKInstructorExtensionOptimizerShim.h>
#import <ClassroomKit/CRKFetchScreenObserversRequest.h>
#import <ClassroomKit/CRKFetchScreenObserversResultObject.h>
#import <ClassroomKit/CRKInstructorExtensionContext.h>
#import <ClassroomKit/CRKASMConcreteCourse.h>
#import <ClassroomKit/CRKLeaveControlGroupRequest.h>
#import <ClassroomKit/CRKFetchCourseInvitationsRequest.h>
#import <ClassroomKit/CRKFetchCourseInvitationsResultObject.h>
#import <ClassroomKit/CRKWiProxTrackerScanner.h>
#import <ClassroomKit/CRKFetchClassroomConfigurationRequest.h>
#import <ClassroomKit/CRKFetchClassroomConfigurationResultObject.h>
#import <ClassroomKit/CRKStudentdIDSBackedIdentityConduit.h>
#import <ClassroomKit/CRKClassroomLockScreenMonitor_iOS.h>
#import <ClassroomKit/CRKTableEntriesWithAddedRow.h>
#import <ClassroomKit/CRKFetchActiveInstructorsRequest.h>
#import <ClassroomKit/CRKFetchActiveInstructorsResultObject.h>
#import <ClassroomKit/CRKFetchRestrictionsRequest.h>
#import <ClassroomKit/CRKFetchRestrictionsResultObject.h>
#import <ClassroomKit/CRKIDSMessageGenerator.h>
#import <ClassroomKit/CRKStudentDaemonProxy.h>
#import <ClassroomKit/CRKChunkedFile.h>
#import <ClassroomKit/CRKSetCourseMascotAndColorRequest.h>
#import <ClassroomKit/CRKExpiredCoursesInteraction.h>
#import <ClassroomKit/CRKSession.h>
#import <ClassroomKit/CRKMDMIdentityProvider.h>
#import <ClassroomKit/CRKRightPaddingTableEntry.h>
#import <ClassroomKit/CRKSetAdHocConfigurationRequest.h>
#import <ClassroomKit/CRKFeatures.h>
#import <ClassroomKit/CRKIfaddrs.h>
#import <ClassroomKit/CRKInterfaceOrientationMonitor.h>
#import <ClassroomKit/CRKKeyedDataStoreUtility.h>
#import <ClassroomKit/CRKTableEntriesWithAddedColumn.h>
#import <ClassroomKit/CRKKeychainUtility.h>
#import <ClassroomKit/CRKFTSEntry.h>
#import <ClassroomKit/CRKSetCoursePermissionRequest.h>
#import <ClassroomKit/CRKResourcesServiceTransportProvider.h>
#import <ClassroomKit/CRKFetchActiveStudentCourseIdentifiersRequest.h>
#import <ClassroomKit/CRKFetchActiveStudentCourseIdentifiersResultObject.h>
#import <ClassroomKit/CRKShareTargetBrowser.h>
#import <ClassroomKit/CRKApplicationDescriptor.h>
#import <ClassroomKit/CRKHideAppsRequest.h>
#import <ClassroomKit/CRKIdentityConfiguration.h>
#import <ClassroomKit/CRKInstructorExtensionProxy.h>
#import <ClassroomKit/CRKCurrentPlatformInstructordTransportProvider.h>
#import <ClassroomKit/CRKUser.h>
#import <ClassroomKit/CRKShowOpenDialogOperation.h>
#import <ClassroomKit/CRKIdentitySharingSendAdvertisingIdentifierAndCertificateRequest.h>
#import <ClassroomKit/CRKInvitationSession.h>
#import <ClassroomKit/CRKFetchLastLoginDateRequest.h>
#import <ClassroomKit/CRKFetchLastLoginDateResultObject.h>
#import <ClassroomKit/CRKListTableEntries.h>
#import <ClassroomKit/CRKParseOPFFilePathOperation.h>
#import <ClassroomKit/CRKEmptyRequest.h>
#import <ClassroomKit/CRKSendIDSMessageRequest.h>
#import <ClassroomKit/CRKEventLog.h>
#import <ClassroomKit/CRKArrayDifferenceEngine.h>
#import <ClassroomKit/_CRKConcreteArrayDifferenceConfiguration.h>
#import <ClassroomKit/CRKNotifyWhenNetworkChangesIPAddressProvider.h>
#import <ClassroomKit/CRKScreenObservationMonitor.h>
#import <ClassroomKit/CRKAcceptCourseInvitationRequest.h>
#import <ClassroomKit/CRKClassNameSubstitutionRequestToOperationClassMapper.h>
#import <ClassroomKit/CRKTableEntriesWithColumnSpacer.h>
#import <ClassroomKit/CRKBlockOperation.h>
#import <ClassroomKit/CRKStudentdTransportProvider.h>
#import <ClassroomKit/CRKDefaultSettingsUIVisibilityProvider.h>
#import <ClassroomKit/CRKDownloadResourcesOperation.h>
#import <ClassroomKit/CRKBrowseForCourseInvitationsRequest.h>
#import <ClassroomKit/CRKSystemInfo.h>
#import <ClassroomKit/CRKHostResourcesOperation.h>
#import <ClassroomKit/CRKTrustEvaluationPolicies.h>
#import <ClassroomKit/CRKFetchSupportedDevicePropertiesRequest.h>
#import <ClassroomKit/CRKFetchSupportedDevicePropertiesResultObject.h>
#import <ClassroomKit/CRKStudentDaemonActivityAssertionRequest.h>
#import <ClassroomKit/CRKASMConcreteStudentFacade.h>
#import <ClassroomKit/CRKInterfaceNameToIPAddressMap.h>
#import <ClassroomKit/CRKBrowseForNearbyDevicesRequest.h>
#import <ClassroomKit/CRKAlwaysFailingTransportProvider.h>
#import <ClassroomKit/CRKExpiredCourseAlertText.h>
#import <ClassroomKit/CRKSetRequestingUnenrollmentFromControlGroupRequest.h>
#import <ClassroomKit/CRKInMemoryKeychain.h>
#import <ClassroomKit/CRKBrowseForShareTargetsRequest.h>
#import <ClassroomKit/CRKFetchBooksOperation.h>
#import <ClassroomKit/CRKOPFPackageContents.h>
#import <ClassroomKit/CRKFetchMDMIdentityRequest.h>
#import <ClassroomKit/CRKFetchMDMIdentityResultObject.h>
#import <ClassroomKit/CRKNetworkPowerAssertion.h>
#import <ClassroomKit/CRKWiProxDeviceRegistration.h>
#import <ClassroomKit/CRKKeyValuePair.h>
#import <ClassroomKit/CRKClassSessionBeaconBrowser.h>
#import <ClassroomKit/CRKConcreteIdentity.h>
#import <ClassroomKit/CRKFetchClassroomConfigurationOperation.h>
#import <ClassroomKit/CRKResource.h>
#import <ClassroomKit/CRKIfaddrsEnumerator.h>
#import <ClassroomKit/CRKImage.h>
#import <ClassroomKit/CRKBookmark.h>
#import <ClassroomKit/CRKNotifyingConfigurationSource.h>
#import <ClassroomKit/CRKParseBookMetadataOperation.h>
#import <ClassroomKit/CRKIdentityServiceFetchCertificatesRequest.h>
#import <ClassroomKit/CRKIdentityServiceFetchCertificatesResultObject.h>
#import <ClassroomKit/CRKShareTargetCollector.h>
#import <ClassroomKit/CRKBook.h>
#import <ClassroomKit/CRKToolCommandUserInfo.h>
#import <ClassroomKit/CRKClassroomConfiguration.h>
#import <ClassroomKit/CRKActiveStudentCoursesSubscriptionRequest.h>
#import <ClassroomKit/CRKPointerSet.h>
#import <ClassroomKit/CRKFetchChaptersFromBooksServiceOperation.h>
#import <ClassroomKit/CRKFetchStagedAdHocIdentityCertificateRequest.h>
#import <ClassroomKit/CRKFetchStagedAdHocIdentityCertificateResultObject.h>
#import <ClassroomKit/CRKFetchBooksFromBooksServiceOperation.h>
#import <ClassroomKit/CRKCurrentPlatformStudentdTransportProvider.h>
#import <ClassroomKit/CRKCloudTuple.h>
#import <ClassroomKit/CRKFetchMeCardRequest.h>
#import <ClassroomKit/CRKFetchMeCardResultObject.h>
#import <ClassroomKit/CRKTable.h>
#import <ClassroomKit/CRKFetchCoursePermissionsRequest.h>
#import <ClassroomKit/CRKFeaturePermissionResultObject.h>
#import <ClassroomKit/CRKFetchCoursePermissionsResultObject.h>
#import <ClassroomKit/CRKUserDefaultsObject.h>
#import <ClassroomKit/CRKExponentialGrowthFunction.h>
#import <ClassroomKit/CRKDownloadResourcesRequest.h>
#import <ClassroomKit/CRKDownloadResourcesResultObject.h>
#import <ClassroomKit/CRKInMemoryCertificate.h>
#import <ClassroomKit/CRKFetchConfigurationTypeRequest.h>
#import <ClassroomKit/CRKFetchConfigurationTypeResultObject.h>
#import <ClassroomKit/CRKUnzipOperation.h>
#import <ClassroomKit/CRKInMemoryIdentity.h>
#import <ClassroomKit/CRKMonitorExpiredCoursesInteraction.h>
#import <ClassroomKit/CRKPrivateIdentity.h>
#import <ClassroomKit/CRKToolArea.h>
#import <ClassroomKit/CRKSetUserImageRequest.h>
#import <ClassroomKit/CRKSetUserImageResultObject.h>
#import <ClassroomKit/CRKDeviceDisplay.h>
#import <ClassroomKit/CRKFailIfMacWithoutClassroomTransportProvider.h>
#import <ClassroomKit/CRKFetchLogEventsRequest.h>
#import <ClassroomKit/CRKFetchLogEventsResultObject.h>
#import <ClassroomKit/CRKSynchronousConfigurationSource.h>
#import <ClassroomKit/CRKFetchUserImageRequest.h>
#import <ClassroomKit/CRKFetchUserImageResultObject.h>
#import <ClassroomKit/CRKFetchControlGroupIdentifiersRequest.h>
#import <ClassroomKit/CRKFetchControlGroupIdentifiersResultObject.h>
#import <ClassroomKit/CRKConcretePrivateKey.h>
#import <ClassroomKit/CRKInMemoryPrivateKey.h>
#import <ClassroomKit/CRKParseOPFPackageContentsOperation.h>
#import <ClassroomKit/CRKDevice.h>
#import <ClassroomKit/CRKScreenshotServiceDateProvider.h>
#import <ClassroomKit/CRKFileBackedConfigurationSource.h>
#import <ClassroomKit/CRKParseHTMLTableOfContentsOperation.h>
#import <ClassroomKit/CRKBuildASMConfigurationRequest.h>
#import <ClassroomKit/CRKBuildASMConfigurationResultObject.h>
#import <ClassroomKit/CRKApplicationInfo.h>
#import <ClassroomKit/CRKSetActiveControlGroupRequest.h>
#import <ClassroomKit/CRKSetClassroomBadgeCountRequest.h>
#import <ClassroomKit/CRKDictionaryRowTableEntries.h>
#import <ClassroomKit/CRKConnectWithoutBeaconAssertionRequest.h>
#import <ClassroomKit/CRKKeyValueTable.h>
#import <ClassroomKit/CRKDmdBackedInstructordTransportProvider.h>
#import <ClassroomKit/CRKFetchCoursesRequest.h>
#import <ClassroomKit/CRKFetchCoursesResultObject.h>
#import <ClassroomKit/CRKDirectoryBackedConfigurationSource.h>
#import <ClassroomKit/CRKSingleConnectionAttemptStudentDaemonProxy.h>
#import <ClassroomKit/CRKIdentitySharingRequestCertificateRequest.h>
#import <ClassroomKit/CRKInternetDateProvider.h>
#import <ClassroomKit/CRKFetchAdHocConfigurationRequest.h>
#import <ClassroomKit/CRKFetchAdHocConfigurationResultObject.h>
#import <ClassroomKit/CRKASMConcreteCertificateCollection.h>
#import <ClassroomKit/CRKKeychainProvider.h>
#import <ClassroomKit/CRKInviteToCourseRequest.h>
#import <ClassroomKit/_CRKErrorHelper.h>
#import <ClassroomKit/CRKSecureCodedUserDefaultsObject.h>
#import <ClassroomKit/CRKToolCommand.h>
#import <ClassroomKit/CRKRemoteDeviceRequest.h>
#import <ClassroomKit/CRKFetchResourceRequest.h>
#import <ClassroomKit/CRKFetchResourceResultObject.h>
#import <ClassroomKit/CRKApplication.h>
#import <ClassroomKit/CRKFetchChaptersRequest.h>
#import <ClassroomKit/CRKFetchChaptersResultObject.h>
#import <ClassroomKit/CRKShareTargetBrowserTransportFactory.h>
#import <ClassroomKit/CRKParsePDFMetadataOperation.h>
#import <ClassroomKit/CRKPlatformInternetDateProvider.h>
#import <ClassroomKit/CATEvent.h>
#import <ClassroomKit/CRKFetchInstructorEndpointRequest.h>
#import <ClassroomKit/CRKFetchInstructorEndpointResultObject.h>
#import <ClassroomKit/CRKFileBackedMarker.h>
#import <ClassroomKit/CRKAirDropItem.h>
#import <ClassroomKit/CRKFailIfMacAndUnenrolledStudentdTransportProvider.h>
#import <ClassroomKit/CRKParseNCXTableOfContentsOperation.h>
#import <ClassroomKit/CRKConcreteCertificate.h>
#import <ClassroomKit/CRKTableKeyValuePair.h>
#import <ClassroomKit/CRKJoinControlGroupRequest.h>
#import <ClassroomKit/CRKStudentdBackedInstructordTransportProvider.h>
#import <ClassroomKit/CRKClassSessionBrowser.h>
#import <ClassroomKit/CRKAirDropTransferInfo.h>
#import <ClassroomKit/CRKWakeScreenRequest.h>
#import <ClassroomKit/CRKGenerateIdentityRequest.h>
#import <ClassroomKit/CRKGenerateIdentityResultObject.h>
#import <ClassroomKit/CRKFetchChaptersOperation.h>
#import <ClassroomKit/CRKFileBasedKeyedDataStoreUtility.h>
#import <ClassroomKit/CRKFetchSettingsUIVisibilityRequest.h>
#import <ClassroomKit/CRKFetchSettingsUIVisibilityResultObject.h>
#import <ClassroomKit/CRKUsageStatistics.h>
#import <ClassroomKit/CRKFetchIdentitiesRequest.h>
#import <ClassroomKit/CRKFetchIdentitiesTaskResultObject.h>
#import <ClassroomKit/CRKPresentAlertOperation.h>
#import <ClassroomKit/CRKRankPath.h>
#import <ClassroomKit/CRKRepeatedCharacterTableEntry.h>
#import <ClassroomKit/CRKIdentitySharingSendCertificateRequest.h>
