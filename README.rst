=========
`ANT+minus <http://code.google.com/p/antpm>`_
=========

Userspace implementation of a wire protocol similar to the
ANT/ANT+/ANT-FS protocols. The goal is to be able to communicate with
the Forerunner 310XT (or any other ANT/ANT+/ANT-FS capable device)
watch in order to retrieve sports tracks.

The C++ implementation is currently available under both Linux and
win. Communication with watches other than the 310XT might (610XT, 910XT
and Swim are likely) work, but are untested. This project currently does
not yet support Forerunner 405, but work is underway for 405
support. Please report your experience to help improving the software.

.. image:: https://secure.travis-ci.org/ralovich/antpm.png
   :alt: Build Status
   :target: http://travis-ci.org/ralovich/antpm
   :width: 77px
   :height: 19px

.. image:: https://scan.coverity.com/projects/2691/badge.svg
   :alt: Coverity Status
   :target: https://scan.coverity.com/projects/2691
   :width: 95px
   :height: 18px
