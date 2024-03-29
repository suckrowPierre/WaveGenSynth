//
// Created by Pierre-Louis Suckrow on 12.07.23.
//
#pragma once


#ifndef DIFFUSESYNTH_GUIHANDLER_H
#define DIFFUSESYNTH_GUIHANDLER_H

#include "juce_audio_processors/juce_audio_processors.h"
#include <foleys_gui_magic/foleys_gui_magic.h>
#include "GuiHelpers.h"

class AudioPluginAudioProcessor;

class GuiHandler {
public:
    GuiHandler(AudioPluginAudioProcessor& processor, foleys::MagicProcessorState& magicState);

    void updateGUIStatus(const juce::String& id, const juce::String& colour);
    juce::ValueTree getNodeByIdAndLogIfInvalid(const juce::String& nodeId);

   // juce::String getCurrentComboBoxValue(const juce::String& id);

private:


    AudioPluginAudioProcessor& processor_;
    foleys::MagicProcessorState& magicState_;
    std::unique_ptr<GuiHelpers> guiHelpers_;
};


#endif //DIFFUSESYNTH_GUIHANDLER_H
