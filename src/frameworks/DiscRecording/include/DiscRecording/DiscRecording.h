/*
 This file is part of Darling.

 Copyright (C) 2019 Lubos Dolezel

 Darling is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Darling is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Darling.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef _DiscRecording_H_
#define _DiscRecording_H_

#import <Foundation/Foundation.h>

#import <DiscRecording/DRContentGenerator.h>
#import <DiscRecording/DRDeviceFilterDelegate.h>
#import <DiscRecording/DRBurn.h>
#import <DiscRecording/DRDevice.h>
#import <DiscRecording/DRErase.h>
#import <DiscRecording/DRNotificationCenter.h>
#import <DiscRecording/DRTask.h>
#import <DiscRecording/DRCDTextBlock.h>
#import <DiscRecording/DRMSF.h>
#import <DiscRecording/DRMSFFormatter.h>
#import <DiscRecording/DRTrack.h>
#import <DiscRecording/DRPrepare.h>
#import <DiscRecording/DRSession.h>
#import <DiscRecording/DRSessionCDTextProducer.h>
#import <DiscRecording/DRSessionProducerPlaceholder.h>
#import <DiscRecording/DRCallbackDevice.h>
#import <DiscRecording/DRAudioTrack.h>
#import <DiscRecording/DRFilesystemTrack.h>
#import <DiscRecording/DRFile.h>
#import <DiscRecording/DRFolder.h>
#import <DiscRecording/DRFSObject.h>
#import <DiscRecording/DRBINFileProducer.h>
#import <DiscRecording/DRSilenceGenerator.h>
#import <DiscRecording/DRDataGenerator.h>
#import <DiscRecording/DRAudioGenerator.h>
#import <DiscRecording/DRCueFileParser.h>
#import <DiscRecording/DRPartialFileAudioProducer.h>
#import <DiscRecording/DRTOCFileParser.h>
#import <DiscRecording/DRTOCProducer.h>
#import <DiscRecording/DRDeviceFilter.h>
#import <DiscRecording/DRDefaultDeviceFilter.h>

void* DRAudioTrackCreate(void);
void* DRAudioTrackCreateWithURL(void);
void* DRBurnAbort(void);
void* DRBurnCopyStatus(void);
void* DRBurnCreate(void);
void* DRBurnGetDevice(void);
void* DRBurnGetProperties(void);
void* DRBurnGetTypeID(void);
void* DRBurnSetProperties(void);
void* DRBurnWriteLayout(void);
void* DRCDTextBlockCreate(void);
void* DRCDTextBlockCreateArrayFromPackList(void);
void* DRCDTextBlockFlatten(void);
void* DRCDTextBlockGetProperties(void);
void* DRCDTextBlockGetTrackDictionaries(void);
void* DRCDTextBlockGetTypeID(void);
void* DRCDTextBlockGetValue(void);
void* DRCDTextBlockSetProperties(void);
void* DRCDTextBlockSetTrackDictionaries(void);
void* DRCDTextBlockSetValue(void);
void* DRCallbackDeviceCreate(void);
void* DRCopyDeviceArray(void);
void* DRCopyLocalizedStringForAdditionalSense(void);
void* DRCopyLocalizedStringForDiscRecordingError(void);
void* DRCopyLocalizedStringForExceptionInfo(void);
void* DRCopyLocalizedStringForSenseCode(void);
void* DRCopyLocalizedStringForValue(void);
void* DRDeviceAcquireExclusiveAccess(void);
void* DRDeviceAcquireMediaReservation(void);
void* DRDeviceCloseTray(void);
void* DRDeviceCopyCDText(void);
void* DRDeviceCopyDeviceForBSDName(void);
void* DRDeviceCopyDeviceForIORegistryEntryPath(void);
void* DRDeviceCopyInfo(void);
void* DRDeviceCopyMediaID(void);
void* DRDeviceCopyStatus(void);
void* DRDeviceEjectMedia(void);
void* DRDeviceGetTypeID(void);
void* DRDeviceIsValid(void);
void* DRDeviceKPSForXFactor(void);
void* DRDeviceOpenTray(void);
void* DRDeviceQueryProperty(void);
void* DRDeviceReleaseExclusiveAccess(void);
void* DRDeviceReleaseMediaReservation(void);
void* DRDeviceXFactorForKPS(void);
void* DREraseCopyStatus(void);
void* DREraseCreate(void);
void* DREraseGetDevice(void);
void* DREraseGetProperties(void);
void* DREraseGetTypeID(void);
void* DREraseSetProperties(void);
void* DREraseStart(void);
void* DRFSObjectCopyBaseName(void);
void* DRFSObjectCopyFilesystemProperties(void);
void* DRFSObjectCopyFilesystemProperty(void);
void* DRFSObjectCopyMangledName(void);
void* DRFSObjectCopyMangledNames(void);
void* DRFSObjectCopyRealURL(void);
void* DRFSObjectCopySpecificName(void);
void* DRFSObjectCopySpecificNames(void);
void* DRFSObjectGetFilesystemMask(void);
void* DRFSObjectGetParent(void);
void* DRFSObjectGetRealFSRef(void);
void* DRFSObjectIsVirtual(void);
void* DRFSObjectSetBaseName(void);
void* DRFSObjectSetFilesystemMask(void);
void* DRFSObjectSetFilesystemProperties(void);
void* DRFSObjectSetFilesystemProperty(void);
void* DRFSObjectSetSpecificName(void);
void* DRFSObjectSetSpecificNames(void);
void* DRFileCreateReal(void);
void* DRFileCreateRealWithURL(void);
void* DRFileCreateVirtualLink(void);
void* DRFileCreateVirtualWithCallback(void);
void* DRFileCreateVirtualWithData(void);
void* DRFileGetTypeID(void);
void* DRFilesystemTrackCreate(void);
void* DRFilesystemTrackEstimateOverhead(void);
void* DRFolderAddChild(void);
void* DRFolderConvertRealToVirtual(void);
void* DRFolderCopyChildren(void);
void* DRFolderCountChildren(void);
void* DRFolderCreateReal(void);
void* DRFolderCreateRealWithURL(void);
void* DRFolderCreateVirtual(void);
void* DRFolderGetTypeID(void);
void* DRFolderRemoveChild(void);
void* DRGetRefCon(void);
void* DRGetVersion(void);
void* DRNotificationCenterAddObserver(void);
void* DRNotificationCenterCreate(void);
void* DRNotificationCenterCreateRunLoopSource(void);
void* DRNotificationCenterGetTypeID(void);
void* DRNotificationCenterRemoveObserver(void);
void* DRPrepareCopyStatus(void);
void* DRPrepareCreate(void);
void* DRPrepareGetDevice(void);
void* DRPrepareGetTypeID(void);
void* DRPrepareStart(void);
void* DRSessionCreate(void);
void* DRSessionGetProperties(void);
void* DRSessionGetTracks(void);
void* DRSessionGetTypeID(void);
void* DRSessionSetProperties(void);
void* DRSessionSetTracks(void);
void* DRSetRefCon(void);
void* DRTaskCopyInfo(void);
void* DRTaskGetTypeID(void);
void* DRTaskIsValid(void);
void* DRTrackCreate(void);
void* DRTrackEstimateLength(void);
void* DRTrackGetProperties(void);
void* DRTrackGetTypeID(void);
void* DRTrackSetProperties(void);
void* DRTrackSpeedTest(void);
void* _DRBurnConsumerThread(void);
void* _DRBurnProducerThread(void);
void* _DRBurnThread(void);
void* _DRDeviceBlank(void);
void* _DRDeviceBlankProgress(void);
void* _DRDeviceCloseFormat(void);
void* _DRDeviceCloseSession(void);
void* _DRDeviceCloseTrack(void);
void* _DRDeviceCopyCachedValue(void);
void* _DRDeviceCopyInfoForProfile(void);
void* _DRDeviceCreate(void);
void* _DRDeviceCreateSenseString(void);
void* _DRDeviceDriveReady(void);
void* _DRDeviceFormatUnitMode1(void);
void* _DRDeviceGetCDCapabilitiesPage(void);
void* _DRDeviceGetCDSpeed(void);
void* _DRDeviceGetConfiguration(void);
void* _DRDeviceGetDeviceSpeed(void);
void* _DRDeviceGetFeature(void);
void* _DRDeviceGetPerformance(void);
void* _DRDeviceGetPerformanceNominalInfo(void);
void* _DRDeviceGetWriteParamsPage(void);
void* _DRDeviceInquiry(void);
void* _DRDeviceLockDoor(void);
void* _DRDeviceMediaEject(void);
void* _DRDeviceModeSelect10(void);
void* _DRDeviceModeSense10(void);
void* _DRDeviceQueryDriveFeatures(void);
void* _DRDeviceQuerySupportLevel(void);
void* _DRDeviceQuiesce(void);
void* _DRDeviceReadBlocks(void);
void* _DRDeviceReadBufferCapacity(void);
void* _DRDeviceReadCD(void);
void* _DRDeviceReadCD2(void);
void* _DRDeviceReadCDText(void);
void* _DRDeviceReadCapacity(void);
void* _DRDeviceReadDVDADIPDescriptor(void);
void* _DRDeviceReadDVDJumpIntervalSize(void);
void* _DRDeviceReadDVDLayer0DataZoneCapacity(void);
void* _DRDeviceReadDVDLayerDescriptor(void);
void* _DRDeviceReadDVDLayerDescriptor2(void);
void* _DRDeviceReadDVDManualLayerJump(void);
void* _DRDeviceReadDVDShiftedMiddleArea(void);
void* _DRDeviceReadDVDStructure(void);
void* _DRDeviceReadDVDWriteProtect(void);
void* _DRDeviceReadDiscInfo(void);
void* _DRDeviceReadDiscInfoType(void);
void* _DRDeviceReadDiscStructure(void);
void* _DRDeviceReadFormatCapacities(void);
void* _DRDeviceReadSubchannel(void);
void* _DRDeviceReadTOC(void);
void* _DRDeviceReadTOC2(void);
void* _DRDeviceReadTrackInfo(void);
void* _DRDeviceRemoveCachedValue(void);
void* _DRDeviceRequestSense(void);
void* _DRDeviceReserveTrack(void);
void* _DRDeviceReserveTrack2(void);
void* _DRDeviceSendCueSheet(void);
void* _DRDeviceSendDVDCPMInfo(void);
void* _DRDeviceSendDVDJumpIntervalSize(void);
void* _DRDeviceSendDVDLayer0DataZoneCapacity(void);
void* _DRDeviceSendDVDManualLayerJump(void);
void* _DRDeviceSendDVDShiftedMiddleArea(void);
void* _DRDeviceSendDVDTimestamp(void);
void* _DRDeviceSetCDSpeed(void);
void* _DRDeviceSetCachedValue(void);
void* _DRDeviceSetDeviceSpeed(void);
void* _DRDeviceSetStreamingPerformance(void);
void* _DRDeviceSetWriteParamsPage(void);
void* _DRDeviceStartStopUnit(void);
void* _DRDeviceSynchronizeCache(void);
void* _DRDeviceUnlockDoor(void);
void* _DRDeviceUnquiesce(void);
void* _DRDeviceUpdateThread(void);
void* _DRDeviceVerify(void);
void* _DRDeviceWaitAndCloseSession(void);
void* _DRDeviceWaitAndSynchronizeCache(void);
void* _DRDeviceWaitForBurnCompletion(void);
void* _DRDeviceWriteAndVerify(void);
void* _DRDeviceWriteBlocks(void);
void* _DRDeviceWriteBufferZone1(void);
void* _DREnableToolMode(void);
void* _DREraseThread(void);
void* _DRIsRemoteLoggingAvailable(void);
void* _DRNotificationCenterAddObserver(void);
void* _DRNotificationCenterCreateDistributed(void);
void* _DRNotificationCenterGetObserverClientData(void);
void* _DRNotificationPost(void);
void* _DRNotificationPostCoalescable(void);
void* _DRPrepareThread(void);
void* _DRRemoteLogWithDevice(void);
void* _DRRemoteLogWithPath(void);
void* _DRToolModeEnabled(void);
void* _DRTrackSpeedTestThread(void);
void* _DRWorkLoopThread(void);

#endif